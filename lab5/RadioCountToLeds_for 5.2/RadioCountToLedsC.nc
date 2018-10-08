// $Id: RadioCountToLedsC.nc,v 1.7 2010-06-29 22:07:17 scipio Exp $

/*									tab:4
 * Copyright (c) 2000-2005 The Regents of the University  of California.  
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the
 *   distribution.
 * - Neither the name of the University of California nor the names of
 *   its contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * Copyright (c) 2002-2003 Intel Corporation
 * All rights reserved.
 *
 * This file is distributed under the terms in the attached INTEL-LICENSE     
 * file. If you do not find these files, copies can be found by writing to
 * Intel Research Berkeley, 2150 Shattuck Avenue, Suite 1300, Berkeley, CA, 
 * 94704.  Attention:  Intel License Inquiry.
 */
 
#include "Timer.h"
#include "RadioCountToLeds.h"
//#include "crypto.h"


 
/**
 * Implementation of the RadioCountToLeds application. RadioCountToLeds 
 * maintains a 4Hz counter, broadcasting its value in an AM packet 
 * every time it gets updated. A RadioCountToLeds node that hears a counter 
 * displays the bottom three bits on its LEDs. This application is a useful 
 * test to show that basic AM communication and timers work.
 *
 * @author Philip Levis
 * @date   June 6 2005
 */

module RadioCountToLedsC @safe() {
  uses {
    interface Leds;
    interface Boot;
    interface Receive;
    interface AMSend;
    interface Timer<TMilli> as MilliTimer;
    interface SplitControl as AMControl;
    interface Packet;
	interface AMPacket;

	interface BlockCipher;
 	interface BlockCipherInfo;
	interface BlockCipherMode as Mode;
  }
}
implementation {
	  CipherContext context;
	CipherModeContext context_M;
  message_t packet;
//message_t packet1;
	uint8_t length;
     uint8_t IV1[16] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
     uint8_t IV2[16] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	 //uint8_t IV1[16] = {1,2,3,4,5,6,7,8,9,10};
     //uint8_t IV2[16] = {23,34,23,4,1,3};

  bool locked;
  uint16_t counter = 0;
  
  event void Boot.booted() {
	call Leds.led0On();
	dbg("Boot", "Application booted.\n");
	dbg("Boot,RadioCountToLedsC", "Application booted.\n");
	//dbg("RadioCountToLedsC", "Application booted (second message).\n");
	//dbg("Boot", "Application booted (third message).\n");
    call AMControl.start();
  }

  event void AMControl.startDone(error_t err) {
    if (err == SUCCESS) {
      call MilliTimer.startPeriodic(250);
    }
    else {
      call AMControl.start();
    }
  }

  event void AMControl.stopDone(error_t err) {
    // do nothing
  }
  
  event void MilliTimer.fired() {
	//uint8_t message[21] = "KAMI_SAME";
	uint8_t decryptMsg[16];
     uint8_t encryptedText[16];
     uint8_t cipherText[16]="KAMI_SAME";
     uint8_t BlockSize;
     uint8_t KeyLength;
     //uint8_t key[16] = {240,2,70,45,140,44,24,18,99,124,1,56,42,74,42,11};
	uint8_t key[16] = {1,3,5,3,5,6,8};

	//uint8_t length;
     //uint8_t IV1[16] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
     //uint8_t IV2[16] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	// uint8_t IV1[16] = {1,2,3,4,5,6,7,8,9,10};
    // uint8_t IV2[16] = {23,34,23,4,1,3};

    counter++;
    //dbg("RadioCountToLedsC", "RadioCountToLedsC: timer fired, counter is %hu.\n", counter);
    if (locked) {
      return;
    }
    else {
      radio_count_msg_t* rcm = (radio_count_msg_t*)call Packet.getPayload(&packet, sizeof(radio_count_msg_t));

//		data_msg_t* data_s = (data_msg_t*)call Packet.getPayload(&packet1, sizeof(data_msg_t));
      if (rcm == NULL) {
	return;
      }

     //BlockSize = call BlockCipherInfo.getPreferredBlockSize();
     //KeyLength = call BlockCipherInfo.getMaxKeyLength();
	//call BlockCipher.init(&context, BlockSize, KeyLength, key);
	//call BlockCipher.encrypt(&context, cipherText, encryptedText);
	//call BlockCipher.decrypt(&context, encryptedText, decryptMsg);
  

	
     call Mode.init(&context_M, 16, key);
	length = sizeof(cipherText)/sizeof(cipherText[0]);
     call Mode.encrypt(&context_M, cipherText, encryptedText, length, IV1);
     call Mode.decrypt(&context_M, encryptedText, decryptMsg, length, IV2);

//data_s-> mydata;
	 rcm->mydata = encryptedText;
	rcm->length=length;
      rcm->counter = counter;
      if (call AMSend.send(AM_BROADCAST_ADDR, &packet, sizeof(radio_count_msg_t)) == SUCCESS) {
//call AMSend.send(AM_BROADCAST_ADDR, &packet1, sizeof(data_msg_t))

	uint16_t Sender_ID = call AMPacket.address();
	dbg("RadioCountToLedsC","*******************************************************\n");
	dbg("RadioCountToLedsC","Sender ID: %hhu\n", Sender_ID);
	dbg("RadioCountToLedsC", "RadioCountToLedsC: packet sent.\n", counter);	
	dbg("RadioCountToLedsC", "Time: %s\n", sim_time_string());
	dbg("Enc", "Cipher Text: %s\n", cipherText);
	//dbg("RadioCountToLedsC","\n");
	dbg("Enc", "Encrypted Text: %s\n", encryptedText);
	dbg("Enc", "Decrypted Text: %s\n", decryptMsg);
	locked = TRUE;
      }
    }
  }

  event message_t* Receive.receive(message_t* bufPtr, 
				   void* payload, uint8_t len) {
	uint8_t decryptMsg[16];
	uint8_t encryptedText[16];
	uint8_t received_data;
	uint8_t Decrypted_data;

	uint16_t source = call AMPacket.source(bufPtr);
	uint16_t Receiver_ID = call AMPacket.address();

	radio_count_msg_t* rcm = (radio_count_msg_t*)payload;
	//data_msg_t* data_t = (data_msg_t*)payload;

	//encryptedText=rcm->mydata;
	//call BlockCipher.decrypt(&context, encryptedText, decryptMsg);
	// call BlockCipher.decrypt(&context, encryptedText, decryptMsg);
// call BlockCipher.decrypt(&context, rcm->mydata, decryptMsg);

	dbg("RadioCountToLedsC","\n");
	dbg("RadioCountToLedsC","Source ID: %hhu\n", source);

    dbg("RadioCountToLedsC", "Received packet of length %hhu.\n", len);
	dbg("RadioCountToLedsC", "Time: %s\n", sim_time_string());
	//dbg("RadioCountToLedsC","ID: %hhu\n", source);
	
	dbg("RadioCountToLedsC","This node ID: %hhu\n", Receiver_ID);
	//received_data=rcm->mydata;
	//dbg("Enc", "Debug\n");
	dbg("Enc", "Received data: %s\n", rcm->mydata);
	//length = sizeof(rcm->mydata)/sizeof(rcm->mydata[0]);
	//call Mode.decrypt(&context_M, rcm->mydata, decryptMsg, rcm->length, IV2);
	//dbg("Enc", "Debug\n");
		//Decrypted_data=decryptMsg;
	//dbg("Enc", "Debug\n");
	//output=decryptMsg;
	//dbg("Enc", "Decrypted data: %s\n", decryptMsg);


    if (len != sizeof(radio_count_msg_t)) {return bufPtr;}
    else {
      radio_count_msg_t* rcm = (radio_count_msg_t*)payload;
      if (rcm->counter & 0x1) {
	call Leds.led0On();
      }
      else {
	call Leds.led0Off();
      }
      if (rcm->counter & 0x2) {
	call Leds.led1On();
      }
      else {
	call Leds.led1Off();
      }
      if (rcm->counter & 0x4) {
	call Leds.led2On();
      }
      else {
	call Leds.led2Off();
      }
      return bufPtr;
    }
  }

  event void AMSend.sendDone(message_t* bufPtr, error_t error) {
    if (&packet == bufPtr) {
      locked = FALSE;
    }
  }

}




