//
// Created by claiff on 6/13/21.
//
#include "../../main/stm32f407xx.h"
#include "../interface/gpio/gpio_mode.hpp"
#include "../interface/gpio/gpio_output_type.hpp"
#include "../interface/gpio/gpio_pull.hpp"
#include "../interface/gpio/gpio_speed.hpp"
#include "../gpio/alternative_function/alternative_function.hpp"

#pragma once

namespace kvadro::periphery::gpio
{

class GpioInit
{
public:
  GpioInit() = default;
  virtual ~GpioInit() = default;

  void SetGpio(GPIO_TypeDef* gpio,
               uint16_t pin,
               interface::gpio::GPIO_ModePtr const& gpio_mode,
               interface::gpio::GpioOutputTypePtr const& output_type,
               interface::gpio::GpioPullPtr const& pull,
               interface::gpio::GpioSpeedPtr const& speed,
               alternative_func::AlternativeFunctionPtr const& func) const noexcept;
};

}