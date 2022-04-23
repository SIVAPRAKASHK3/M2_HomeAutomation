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








# WORKING AND PROCEDURE
## simulation 1
* Initally run the simulation.
* Right click atmega open the **serial port motoring** .
* As per your command the operation occurs.
## simulatiom 2
* The switch is assumed as ir sensor it will detect motion.
* If any one presenst it will send high signal.
* Else it will signal low signal.
* For high signal the turn on operation occurs.
* For low signal the turn off operation occurs.
