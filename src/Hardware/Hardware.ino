#include "Hardware.h"

void setup() {
  Serial.begin(9600);
  Serial.println(hardware::add(2, -5));
  Serial.println(hardware::subtract(10, 4));
  Serial.println(hardware::divide(634, 34));
}

void loop() {}