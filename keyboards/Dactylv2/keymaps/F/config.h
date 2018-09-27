#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"

/* Use I2C or Serial, not both */

#define USE_SERIAL
// #define USE_I2C

/* Select hand configuration */

//#define MASTER_LEFT
// #define _MASTER_RIGHT
 #define EE_HANDS

#define TAPPING_TERM 150

#define MOUSEKEY_INTERVAL 10

#define MOUSEKEY_DELAY 0

#define MOUSEKEY_TIME_TO_MAX 30

#define MOUSEKEY_MAX_SPEED 8

#define MOUSEKEY_WHEEL_DELAY 0

#define PERMISSIVE_HOLD


#endif