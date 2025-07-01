#define BLYNK_TEMPLATE_ID "TMPL37OyLyTnE"
#define BLYNK_TEMPLATE_NAME "FAN TEMP HUMID"
#define BLYNK_AUTH_TOKEN "ZScBc7S5VVzPtaNODNk3el3RrJ8xB2s1" // change according to your blynk setup
/*************************************************************
  Blynk is a platform with iOS and Android apps to control
  ESP32, Arduino, Raspberry Pi and the likes over the Internet.
  You can easily build mobile and web interfaces for any
  projects by simply dragging and dropping widgets.

    Downloads, docs, tutorials: https://www.blynk.io
    Sketch generator:           https://examples.blynk.cc
    Blynk community:            https://community.blynk.cc
    Follow us:                  https://www.fb.com/blynkapp
                                https://twitter.com/blynk_app

  Blynk library is licensed under MIT license
  This example code is in public domain.

 *************************************************************
  This example runs directly on ESP32 chip.

  NOTE: This requires ESP32 support package:
    https://github.com/espressif/arduino-esp32

  Please be sure to select the right ESP32 module
  in the Tools -> Board menu!

  Change WiFi ssid, pass, and Blynk auth token to run :)
  Feel free to apply it to any other example. It's simple!
 *************************************************************/

/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial

/* Fill in information from Blynk Device Info here */
//#define BLYNK_TEMPLATE_ID           "TMPxxxxxx"
//#define BLYNK_TEMPLATE_NAME         "Device"
//#define BLYNK_AUTH_TOKEN            "YourAuthToken"


#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
#include <IRremote.h>
#include <DHT.h>
#include <DHT_U.h>
#include <Arduino.h>
#include <TM1637Display.h>
#define CLK 27
#define DIO 26
#define DHTPIN 32
#define DHTTYPE DHT22

TM1637Display display(CLK, DIO);
DHT dht(DHTPIN, DHTTYPE);

const uint8_t celsius[] = {
  SEG_A | SEG_B | SEG_F | SEG_G,  // °
  SEG_A | SEG_D | SEG_E | SEG_F   // C
};
const uint8_t Humidity[] = {
  SEG_B | SEG_C | SEG_E | SEG_F | SEG_G //H
  };

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Area 24";
char pass[] = "Human@222";

void setup()
{
  // Debug console
  Serial.begin(9600);
  IrSender.begin(21);
  display.setBrightness(2);
  dht.begin();
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}
BLYNK_WRITE(V0) {
  int value = param.asInt();
  Serial.println(value);

  if (value == 1) {
    IrSender.sendNEC(0xF300, 0x97, 1);
  }
}

BLYNK_WRITE(V1) {
  int value = param.asInt();
  Serial.println(value);

  if (value == 1) {
    IrSender.sendNEC(0xF300, 0x91, 1);
  }
}

// BLYNK_WRITE(V2) {
//   int value = param.asInt();
//   Serial.println(value);

//   if (value == 1) {
//     display.setBrightness(1);
//   }
//   if (value == 2) {
//     display.setBrightness(2);
//   }
//   if (value == 3) {
//     display.setBrightness(3);
//   }
//   if (value == 4) {
//     display.setBrightness(4);
//   }
//   if (value == 5) {
//     display.setBrightness(5);
//   }
//   if (value == 6) {
//     display.setBrightness(6);
//   }
// }

BLYNK_WRITE(V3) {
  int value = param.asInt();
  Serial.println(value);

  if (value == 1) {
    IrSender.sendNEC(0xF300, 0x8B, 1);
  }
  if (value == 2) {
    IrSender.sendNEC(0xF300, 0x90, 1);
  }
  if (value == 3) {
    IrSender.sendNEC(0xF300, 0x8A, 1);
  }
  if (value == 4) {
    IrSender.sendNEC(0xF300, 0x93, 1);
  }
  if (value == 5) {
    IrSender.sendNEC(0xF300, 0x88, 1);
  }
  if (value == 6) {
    IrSender.sendNEC(0xF300, 0x8F, 1);
  }

}
// BLYNK_WRITE(V4) {
//   int value = param.asInt();
//   Serial.println(value);

//   if (value == 1) {
//     IrSender.sendNEC(0xF300, 0x8A, 1);
//   }
// }
// BLYNK_WRITE(V5) {
//   int value = param.asInt();
//   Serial.println(value);

//   if (value == 1) {
//     IrSender.sendNEC(0xF300, 0x93, 1);
//   }
// }

// BLYNK_WRITE(V6) {
//   int value = param.asInt();
//   Serial.println(value);

//   if (value == 1) {
//     IrSender.sendNEC(0xF300, 0x88, 1);
//   }
// }

// BLYNK_WRITE(V7) {
//   int value = param.asInt();
//   Serial.println(value);

//   if (value == 1) {
//     IrSender.sendNEC(0xF300, 0x8F, 1);
//   }
// }

BLYNK_WRITE(V8) {
  int value = param.asInt();
  Serial.println(value);

  if (value == 1) {
    IrSender.sendNEC(0xF300, 0x8E, 1);
  }
}

BLYNK_WRITE(V9) {
  int value = param.asInt();
  Serial.println(value);

  if (value == 1) {
    IrSender.sendNEC(0xF300, 0x96, 1);
  }
}



void loop()
{
  Blynk.run();
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  display.setSegments(celsius, 2, 2);
  display.showNumberDec(t, false, 2, 0);
  delay(2000);
  display.clear();
  display.setSegments(Humidity, 1, 3);
  display.showNumberDec(h, false, 2, 0);
  Blynk.virtualWrite(V10, t);
  Blynk.virtualWrite(V11, h);
  delay(2000);
}



