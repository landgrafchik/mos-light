#ifndef __MAIN_H__
#define __MAIN_H__

/*******************************************************************************
 *** INCLUDES
 ******************************************************************************/
#include "common/platform.h"
#include "fw/src/mgos_sys_config.h"
#include "fw/src/mgos_app.h"
#include "fw/src/mgos_gpio.h"
#include "fw/src/mgos_timers.h"
#include "fw/src/mgos_wifi.h"
#include "fw/src/mgos_mqtt.h"
#include "led.h"
#include "switch.h"
#include "mqtt.h"

/*******************************************************************************
 *** DEFENITIONS
 ******************************************************************************/
#define  SYS_TICK   (50) //time [ms]

//  Node MCU pin-out
#define  D0         (16)
#define  D1         (5)
#define  D2         (4)
#define  D3         (0)
#define  D4         (2)
#define  D5         (14)
#define  D6         (12)
#define  D7         (13)
#define  D8         (15)
#define  D9         (3)
#define  D10        (1)

#define  NUM_NODES               get_cfg()->settings.num_nodes
#define  LIGHT_PIN(n)   ((int *)&get_cfg()->settings.light.pin_0)[n]
#define  LIGHT_ID(n)    ((int *)&get_cfg()->settings.light.id_0)[n]
#define  SWITCH_PIN(n)  ((int *)&get_cfg()->settings.sw.pin_0)[n]

/*******************************************************************************
 *** MACROSES
 ******************************************************************************/
#define pin_input_up(pin)    { mgos_gpio_set_mode(pin, MGOS_GPIO_MODE_INPUT);  \
                               mgos_gpio_set_pull(pin, MGOS_GPIO_PULL_UP); }
#define pin_output(pin)        mgos_gpio_set_mode(pin, MGOS_GPIO_MODE_OUTPUT);
#define pin_write(pin, state)  mgos_gpio_write(pin, state)
#define pin_read(pin)          mgos_gpio_read(pin)

#endif  //__MAIN_H__