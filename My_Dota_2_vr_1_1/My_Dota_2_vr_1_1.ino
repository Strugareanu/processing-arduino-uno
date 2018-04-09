//any questions contact me @ alexandre.karpinski.m@gmail.com or PM me: /u/laka_r

const int d = 6, h = 5, m = 3; //Red, green and blue LEDs, be sure to use PWM ports
int incomingByte;



#define BRIGHTNESS         100
#define FRAMES_PER_SECOND  250

#ifdef __AVR__
#include <avr/power.h>
#endif
#include "FastLED.h"
#define LEDS 240
//#define DATA_PIN 5
#define PIN 5
CRGB leds[LEDS];

void setup() {
 
  //FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
  
  // Initial RGB flash
//  LEDS.showColor(CRGB(255, 0, 0));
 // delay(500);
 // LEDS.showColor(CRGB(0, 255, 0));
//  delay(500);
 // LEDS.showColor(CRGB(0, 0, 255));
 // delay(500);
//  LEDS.showColor(CRGB(0, 0, 0));
  FastLED.addLeds<WS2812B, PIN, RGB>(leds, LEDS);
//  for ( int i = 0; i < LEDS; i++ )
 // {
 //   leds[i] = CRGB::Black;
 // }
  FastLED.show();
  Serial.begin(115200); //starts serial communication with processing
 // pinMode(d, 5);
  //pinMode(h, 5);
 // pinMode(m, 5);
  
}

 uint8_t gCurrentPatternNumber = 0; // Index number of which pattern is current
 uint8_t gHue = 0; // rotating "base color" used by many of the patterns

void loop()
{
  if (Serial.available() > 0)
  {
   int incomingByte = Serial.read(); //reads the bytes coming from processing
    //Death indicator
    //if (incomingByte == 'A')
    if (incomingByte == 'A')
    
    {
  //    analogWrite(h, 0);
 //     analogWrite(m, 0);
 //     analogWrite(d, 255);
     digitalWrite; (5, leds[212] = CRGB(0, 255, 0));
     digitalWrite; (5, leds[211] = CRGB(0, 0, 0));
     digitalWrite; (5, leds[210] = CRGB(0, 0, 0));
     FastLED.show();
    delay(1); 
     
    }
    if (incomingByte == 'B')
    {
      digitalWrite; (5, leds[212] = CRGB(0, 0, 0));
    FastLED.show();
    delay(1); 
      
    }

    //Blue LED for mana
    if (incomingByte == '1')
    {
      digitalWrite; (5, leds[211] = CRGB(0, 0, 255));
      FastLED.show();
    delay(1); 
      
    }
    if (incomingByte == '2')
    {
      digitalWrite; (5, leds[211] = CRGB(0, 0, 233));
      FastLED.show();
    delay(1); 
      
    }
    if (incomingByte == '3')
    {
      digitalWrite; (5, leds[211] = CRGB(0, 0, 185));
      FastLED.show();
    delay(1); 
     
    }
    if (incomingByte == '4')
    {
      digitalWrite; (5, leds[211] = CRGB(0, 0, 165));
      FastLED.show();
    delay(1); 
      
    }
    if (incomingByte == '5')
    {
      digitalWrite; (5, leds[211] = CRGB(0, 0, 127));
      FastLED.show();
    delay(1); 
     
    }
    if (incomingByte == '6')
    {
      digitalWrite; (5, leds[211] = CRGB(0, 0, 98));
      FastLED.show();
    delay(1); 
     
    }
    if (incomingByte == '7')
    {
      digitalWrite; (5, leds[211] = CRGB(0, 0, 75));
      FastLED.show();
    delay(1); 
      
    }
    if (incomingByte == '8')
    {
      digitalWrite; (5, leds[211] = CRGB(0, 0, 49));
      FastLED.show();
    delay(1); 
      
    }
    if (incomingByte == '9')
    {
      digitalWrite; (5, leds[211] = CRGB(0, 0, 20));
      FastLED.show();
    delay(1); 
      
    }
    if (incomingByte == '0')
    {
      digitalWrite; (5, leds[211] = CRGB(0, 0, 0));
      FastLED.show();
    delay(1); 
    
      
    }


  //Green LED for health
    if (incomingByte == 'a')
    {
      digitalWrite; (5, leds[210] = CRGB(255, 0, 0));
    }
    if (incomingByte == 'b')
    {
      digitalWrite; (5,leds[210] = CRGB(233, 0, 0));
    }
    if (incomingByte == 'c')
    {
      digitalWrite; (5, leds[210] = CRGB(195, 0, 0));
    }
    if (incomingByte == 'd')
    {
      digitalWrite; (5, leds[210] = CRGB(159, 0, 0));
    }
    if (incomingByte == 'e')
    {
      digitalWrite; (5, leds[210] = CRGB(175, 0, 0));
    }
    if (incomingByte == 'f')
    {
      digitalWrite; (5, leds[210] = CRGB(101, 0, 0));
    }
    if (incomingByte == 'g')
    {
      digitalWrite; (5, leds[210] = CRGB(75, 0, 0));
    }
    if (incomingByte == 'h')
    {
      digitalWrite; (5, leds[210] = CRGB(49, 0, 0));
    }
    if (incomingByte == 'i')
    {
      digitalWrite; (5, leds[210] = CRGB(17, 0, 0));
    }
    if (incomingByte == 'j')
    {
      digitalWrite; (5, leds[210] = CRGB(0, 0, 0));
    }
  }
}
