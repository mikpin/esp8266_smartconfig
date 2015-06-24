#include "espressif/esp_common.h"

#include "utils.h"
#include "user_config.h"

void init_mode(){
uint32 io_reg;
io_reg = GPIO_PIN_REG(MODE_PIN);
gpio_output_set(0,0,0,MODE_PIN);
PIN_PULLUP_EN(io_reg);


}
