esp_iot_rtos_sdk based configuration tool
================

NFor normal operation the chips works in Station Mode
Putting GPIO_0 to GND it switches to soft AP encrypted channel

connect to the chosen ssid and send a config packege to configure the chip then reset.
if theisn't a connectione in 60 seconds the system resets.
   
Note

APIs of "esp_iot_rtos_sdk" are same as "esp_iot_sdk"

More details in "Wiki" !

   
Compile

using command： ./gen_misc.sh
   

Download

eagle.app.v6.flash.bin, downloads to flash 0x00000

eagle.app.v6.irom0text.bin, downloads to flash 0x40000

blank.bin, downloads to flash 0x7E000
