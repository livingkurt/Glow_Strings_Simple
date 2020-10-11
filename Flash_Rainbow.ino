void flash_rainbow()
{
  int rate = 3;
  int strobe = 10;
  int gap = 1;

  int start_hue;
  int delta_hue = 5;

  start_hue = -1 * millis() / rate;
  for (int i = 0; i < NUM_LEDS; i++)
  {
    leds[i] = CHSV(start_hue, 255, 255);
    start_hue += delta_hue;
  };
  // fill_solid(leds, NUM_LEDS, CHSV(start_hue, 255, 255));
  hold(strobe);
  FastLED.show();
  fill_solid(leds, NUM_LEDS, CHSV(0, 0, 0));
  hold(gap);
  FastLED.show();
  // start_hue += delta_hue;
}
