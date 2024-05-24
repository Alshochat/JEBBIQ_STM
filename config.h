// Copyright 2024 Alshochat (@Alshochat)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define ENCODERS_PAD_A { C10, C12, C14 }
#define ENCODERS_PAD_B { C11, C13, C15 }

#define ENCODER_RESOLUTIONS { 2, 2, 2 }

/* I2C config for display */
#define I2C_DRIVER I2CD2
#define I2C1_SCL_PIN C0
#define I2C1_SDA_PIN C1

// The pin connected to the data pin of the LEDs
#define WS2812_DI_PIN A0
// #define WS2812_PWM_DRIVER PWMD4

// The number of LEDs connected
#define RGBLIGHT_LIMIT_VAL 128