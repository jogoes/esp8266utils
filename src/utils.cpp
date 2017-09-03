#include "utils.h"

#include <Arduino.h>

void
Esp8266Utils::log(const char* msg) {
     Serial.println(msg);
}
