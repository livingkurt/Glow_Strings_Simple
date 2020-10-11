// // ***************************************
// // ** FastLed/NeoPixel Common Functions **
// // ***************************************

// // Apply LED color changes
// void showStrip()
// {
// #ifdef ADAFRUIT_NEOPIXEL_H
//   // NeoPixel
//   strip.show();
// #endif
// #ifndef ADAFRUIT_NEOPIXEL_H
//   // FastLED
//   FastLED.show();
// #endif
// }

// // Set a LED color (not yet visible)
// void setPixel(int Pixel, byte red, byte green, byte blue)
// {
// #ifdef ADAFRUIT_NEOPIXEL_H
//   // NeoPixel
//   strip.setPixelColor(Pixel, strip.Color(red, green, blue));
// #endif
// #ifndef ADAFRUIT_NEOPIXEL_H
//   // FastLED
//   leds[Pixel].r = red;
//   leds[Pixel].g = green;
//   leds[Pixel].b = blue;
// #endif
// }

// // Set all LEDs to a given color and apply it (visible)
// void setAll(byte red, byte green, byte blue)
// {
//   for (int i = 0; i < NUM_LEDS; i++)
//   {
//     setPixel(i, red, green, blue);
//   }
//   showStrip();
// }

// void cyclone_bounce()
// {
//   byte red = 0xff;
//   byte green = 0x00;
//   byte blue = 0x00;
//   int EyeSize = 4;
//   int SpeedDelay = 10;
//   int ReturnDelay = 50;

//   for (int i = 0; i < NUM_LEDS - EyeSize - 2; i++)
//   {
//     setAll(0, 0, 0);
//     setPixel(i, red / 10, green / 10, blue / 10);
//     for (int j = 1; j <= EyeSize; j++)
//     {
//       setPixel(i + j, red, green, blue);
//     }
//     setPixel(i + EyeSize + 1, red / 10, green / 10, blue / 10);
//     showStrip();
//     delay(SpeedDelay);
//   }