#pragma once

#include_next <mcuconf.h>

#undef STM32_I2C_USE_I2C2
#define STM32_I2C_USE_I2C2 TRUE

// #undef STM32_SPI_USE_SPI1
// #define STM32_SPI_USE_SPI1 TRUE

// #undef STM32_PWM_USE_TIM4
// #define STM32_PWM_USE_TIM4 TRUE      