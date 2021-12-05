#pragma once

#include <cstdint>

namespace esphome {
namespace pmsx003 {

class AbstractAQICalculator {
 public:
  virtual uint8_t get_aqi(uint16_t pm2_5_value, uint16_t pm10_0_value) = 0;
};

}  // namespace pmsx003
}  // namespace esphome
