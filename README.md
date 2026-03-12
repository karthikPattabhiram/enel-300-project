# enel-300-project

# Pin configuration 

## Car 

| Net    | Description | PIN | Peripheral |  Notes|
| ----------- | ----------- | ----------- | -----------| 
| IN1_1 | PWM input 1 for motordriver 1 | PA6 | Timer 3 channel 1 | 
| IN1_2 | PWM input 2 for motordriver 1 | PA1 | Timer 2 channel 2 | 
| IN2_1 | PWM input 1 for motordriver 2 | PB6 | Timer 4 channel 1 |
| IN2_2 | PWM input 2 for motordriver 2 | PA8  | Timer 1 channel 1 |
| echo | echo pin of ultrasonic sensor | Pb14  | Timer 12 channel 1 |   Dont forget to enable global interrupt!|
| Trig| Trigger pin of ultrasonic sensor | PC8 | GPIO output| 
| RX| Tx of bluetooth module | PC12| Uart 4 |  
| TX| Rx of bluetooth module | PD2| Uart 4 |
| Insense_1 | ADC input for stall detection. | PA1 | ADC1 - In1|   
| Insense_2 | ADC input for stall detection. | PA4 | ADC2 - In4|   
| Head Lights| head light control | PB5 | GPIO output| 
| Tail light| Tail light control| PB4 | GPIO output| 
| Buzzer| buzzer pwm output for metal detection circuit | PA0 | Timer X channel Y|


## Controller

| Net    | Description | PIN | Peripheral |  Notes|
| ----------- | ----------- | ----------- | -----------| 
| SCL| Six wire SPI input stuff | PA5 | SPI 1 | 
| SDA | Six wire SPI input stuff | PA7 | SPI 1 |
| DC | Six wire SPI input stuff | PA12 | SPI 1 (GPIO output) |
| CS | Six wire SPI input stuff | PA4  | SPI 1 |
| RST | Six wire SPI input stuff | PA11  |SPI 1  (GPIO output) | 
| X_pin| Adc output of joystick1 | PC0 | ADC 1 In 10| 
|Y_pin| Adc output of joystick2 | PC1| ADC 1 In 11 |  
| RX| Tx of bluetooth module | PC12| Uart 4 |  
| TX| Rx of bluetooth module | PD2| Uart 4 |
| Sw_pin | Switch of Joystick 1 | PC2 | GPIO Input|   
| Sw2_Pin | Switch of joystick 2 | PC3 | GPIO Input
| SCRN_CRTL1 | button | PC6 | GPIO Input|   
| SCRN_CRTL2 | button  | PC5 | GPIO Input|   



