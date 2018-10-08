
#include "Timer.h"

module MyRadioC @safe()
{
  uses interface Timer<TMilli> as Timer;
  uses interface SplitControl;
  uses interface Leds;
  uses interface Boot;
}
implementation
{
  event void Boot.booted()
  {
    call SplitControl.start();
  }

  event void SplitControl.startDone(error_t x)
  {
    if (x == SUCCESS){ 
      call Leds.led2On();
      call Timer.startOneShot(3000);
    }
  }

  event void Timer.fired()
  {
    call SplitControl.stop();
  }

  event void SplitControl.stopDone(error_t y)
  {
    if(y == SUCCESS) {
      call Leds.led2Off();
      call Leds.led0On();
    }
  }
}
