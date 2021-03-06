#             REPORT

# Abstract
#
**This project is based on implementing the home automation.If the motion
is detected the fan and the lighiting will be turned on,it is achieved 
by *__sensor__*.The command based operation is posible and it is implemented 
using *__UART__* , for fan i have used an simple DC motor.The overall set is 
divided into two setup simulation 1(work based on commands) and simulation 2
(work based on sensor input) if the temperature is grater than 35 degree celcius the motoe
will turn on else turn off.This simulation 1 is works by the commands given by 
user but the commands are pre-defined.The energy wastage can be avoided and the
automatic ventilation is made by automatically for proper ventilation.**



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
# IR SENSOR
### case 1:
* If the switch is off that means that it doesn't record any motion on room.
* Motor and lighiting will be off.
### case 2:
* If the switch is on that means that it record any motion on room and send high signal.
* Motor and lighiting will be off.
# TEMPERATURE SENSOR
### case 1:
* If the temperature is greater than 35 degree celcius motor will turn on.
* Else the motor will remain in  turn off state.
# SIMPLE DESIGN DIAGRAM
![blockDiagram drawio (3)](https://user-images.githubusercontent.com/101009349/164979094-7f949926-952f-4f3c-a337-08a377f547ac.png)

# COMPONENTS AND SIMULATION

## COMPONENTS

1. **ATMEGA 328**
2. **RELAY**
3. **MOTOR**
4. **LED**
5. **SWITCH(AS SENSOR)**
6. **POT(TEMPERATURE SENSOR)(ANALOG INPUT)**


## COMPONENTS DESCRIPTION
* ATmega328 is an Advanced Virtual RISC (AVR) microcontroller. It supports 8-bit data processing. ATmega-328 has 32KB internal flash memory. ATmega328 has 1KB Electrically Erasable Programmable Read-Only Memory (EEPROM).The ATmega328 is a single-chip microcontroller created by Atmel in the megaAVR family It has a modified Harvard architecture 8-bit RISC processor core.

* Potentiometers work by varying the position of a sliding contact across a uniform resistance. In a potentiometer, the entire input voltage is applied across the whole length of the resistor, and the output voltage is the voltage drop between the fixed and sliding contact as shown below.

* LEDs are ???directional??? light sources, which means they emit light in a specific direction, unlike incandescent and CFL, which emit light and heat in all directions. That means LEDs are able to use light and energy more efficiently in a multitude of applications.
* Motor used here is a simple dc motor which will run if the input is dc supply 
* Relay will oprate if the excitation coil energize it will either normally on or normally off based on conifguration.
## SIMULATION DIAGRAM:
# INPUT
![input](https://user-images.githubusercontent.com/101009349/164973957-1837932f-17ac-4fc4-8fcd-4d1034040544.png)
# OUTPUT
![OUTPUT](https://user-images.githubusercontent.com/101009349/164974024-efb6fafc-bb3e-49ef-8e30-4019589d4d6e.PNG)



# WORKING AND PROCEDURE
#
## simulation 1
* Initally run the simulation.
* Right click atmega open the **serial port motoring** .
* As per your command the operation occurs.
## simulation 2
#
* By adjusting the pot the temperautre can be varied,to see the changes in input side.
* The pot is temperature sensor if it is greater than 35 degeree celcius fan will turn on else return to off state
* The switch is assumed as ir sensor it will detect motion.
* If any one presenst it will send high signal.
* Else it will signal low signal.
* For high signal the turn on operation occurs.
* For low signal the turn off operation occurs.

# CIRCUIT FLOW DIAGRAM
![structural drawio (3)](https://user-images.githubusercontent.com/101009349/164976847-cada4928-4624-42dd-937c-a9b52beac99d.png)



# CONCLUSION
**Thus the succcessfully controlling the fan and lighting using the *__commands__* in uart (simulation1)  and also implemented
using sensor .the sensor is here repsesented as switch and potentiometer is represented as temperature sesnor under simulation 2 .**
