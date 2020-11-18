#pragma once
#include "PinController.h"

namespace firmware {
struct ArduinoPinController : public PinController {
  void setPinDirection(int pin, PinDirection pinDirection) override;
  void setPin(int pin) override;
  void clearPin(int pin) override;
};
} // namespace firmware
