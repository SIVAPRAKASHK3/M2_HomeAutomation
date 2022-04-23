#             REPORT




# HOME AUTOMATION BASED
* My idea is to run the exhaust fan and the lighting in kitchen
* It can done by mannual and by sensor

# Mannual
* Using UART signal i have implemented it.
* By typing commends by opening *__serial monitor__* in atmega.

 ## __Commends__
*  L-Light on.
* l-light off.
* F-fan on (motor will run)
* f-fan off(motor stops)

## Sensor
### case 1:
* If the switch is off that means that it doesn't record any motion on room.
* Motor and lighiting will be off.
### case 2:
* If the switch is on that means that it record any motion on room and send high signal.
* Motor and lighiting will be off.

# SIMULATION AND COMPONENTS

## SIMULATION DIAGRAM:
![INPUT](https://github.com/SIVAPRAKASHK3/pic/blob/master/input.PNG)
![OUTPUT](https://github.com/SIVAPRAKASHK3/pic/blob/master/output.PNG)

## COMPONENTS

1. **ATMEGA 328**
2. **RELAY**
3. **MOTOR**
4. **LED**
5. **SWITCH(AS SENSOR)**


## COMPONENTS DESCRIPTION
* ATmega328 is an Advanced Virtual RISC (AVR) microcontroller. It supports 8-bit data processing. ATmega-328 has 32KB internal flash memory. ATmega328 has 1KB Electrically Erasable Programmable Read-Only Memory (EEPROM).
* LEDs are “directional” light sources, which means they emit light in a specific direction, unlike incandescent and CFL, which emit light and heat in all directions. That means LEDs are able to use light and energy more efficiently in a multitude of applications.
* Motor used here is a simple dc motor which will run if the input is dc supply 
* Relay will oprate if the excitation coil energize it will either normally on or normally off based on conifguration.

# WORKING AND PROCEDURE
#
## simulation 1
* Initally run the simulation.
* Right click atmega open the **serial port motoring** .
* As per your command the operation occurs.
## simulatioN 2
#
* The switch is assumed as ir sensor it will detect motion.
* If any one presenst it will send high signal.
* Else it will signal low signal.
* For high signal the turn on operation occurs.
* For low signal the turn off operation occurs.

# CIRCUIT FLOW DIAGRAM
![FLOW](https://github.com/SIVAPRAKASHK3/pic/blob/master/structural.drawio.png)

# CONCLUSION

