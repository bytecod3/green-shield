#include <Arduino.h>
#include "gs_gv.h"
#include "gs_mapping.h"
#include "gs_parse.h"
#include "gs_send.h"
#include <dht.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);

  pinMode(RELAY1, OUTPUT);
  pinMode(RELAY2, OUTPUT);

  Serial.println("OK");
  
}

void loop() {
  // put your main code here, to run repeatedly:

  parse_cmd();

  current_temp = read_temp();
  current_humid = read_humidity();
  current_moisture = read_moisture();
  current_light - read_light();

  scan_map();
}
