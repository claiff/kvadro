//
// Created by claiff on 6/13/21.
//

#pragma once

#include "../../interface/gpio/gpio_general.h"

namespace kvadro::periphery::gpio::alternative_func
{

class AlternativeFunction: public interface::gpio::GpioGeneral
{
public:
  explicit AlternativeFunction(uint8_t function);
  ~AlternativeFunction() = default;

  void SetFunction(GPIO_TypeDef *gpio, uint16_t pin) noexcept;

private:
  uint8_t mFunction;
};
  using AlternativeFunctionPtr = std::shared_ptr<AlternativeFunction>;
}