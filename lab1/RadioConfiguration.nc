configuration RadioConfiguration
{
}
implementation
{
  components MainC, LedsC, ActiveMessageC;
  components MyRadioC as App
  components new TimerMilliC() as Timer;

  App -> MainC.Boot;

  App.Timer -> Timer;
  App.Leds -> LedsC;
  App.SplitControl -> ActiveMessageC;
}
