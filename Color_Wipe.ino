void color_wipe()
{
  int rate = 10;
  int start_hue;
  int speed = 5;
  int delta_hue = 5;
  start_hue = -1 * millis() / rate;
  for (uint16_t i = 0; i < NUM_LEDS; i++)
  {

    leds[i] = CHSV(start_hue, 255, 255);
    FastLED.show();
    start_hue += delta_hue;
    hold(speed);
  }
  for (uint16_t i = 0; i < NUM_LEDS; i++)
  {
    // leds[i ].r = 0x00;
    // leds[i ].g = 0x00;
    // leds[i ].b = 0x00;
    leds[i] = CHSV(255, 0, 255);
    FastLED.show();
    // start_hue += delta_hue;
    hold(speed);
  }
}
