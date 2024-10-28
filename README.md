# AUTOMATIC WATER DISPENSOR WITH REFILL MECHANISM

## OVERVIEW:

This project is an Automatic Water Dispenser controlled by an IR sensor and an Arduino Uno microcontroller. It automatically dispenses water when an object (e.g., a hand or container) is detected by the IR sensor. Additionally, it monitors the water level in the tank using a water level sensor and automatically triggers a refill mechanism when the water level is too low. The system uses two relays: one to control the water dispensing pump and another to control the refill pump.

## FEATURES:

1. Automatic Dispensing: Dispenses water when an object is detected near the dispenser.
2. Automated Refilling: Automatically refills the water tank when the water level falls below a certain point.
3. Real-time Monitoring: Serial output for monitoring water level and system status.

## COMPONENTS:

1. Arduino Uno - The main microcontroller that manages the sensors and relays.
2. IR Sensor - Detects the presence of an object (e.g., hand) near the dispenser.
3. Water Level Sensor - Measures the water level in the container.
4. 9V Water Pump - Dispenses water when triggered by the Arduino.
5. Relay Module (2 relays) - One controls the water pump and the other controls the refill mechanism.
6. Power Supply - Powers the Arduino and the water pump (9V).
7. Wires - Used for connecting the components.

 you can also refer that LIST OF SENSORS AND ACTUATORS folder that will gives you gives the pictorials of the components.


## CIRCUIT DIAGRAM:

- IR Sensor: Connects to digital pin 2 of the Arduino.
- Water Level Sensor: Connects to analog pin A0 of the Arduino.
- Water Pump: Controlled by the relay connected to digital pin 8 of the Arduino.
- Refill Pump: Controlled by another relay connected to digital pin 9 of the Arduino.
- Power Supply: 9V for the pump, with the Arduino powered through either USB or an external supply.

you can refer the circuit diagram image attached in this folder.


## WORKING:

The IR sensor detects when an object is near the dispenser. When detected, the system turns on the water pump to dispense water.The water level sensor monitors the water level in the tank. If the water level drops below a predefined threshold (waterLevelRefillThreshold), the refill pump is triggered, and it continues to refill the tank until the water level reaches an upper threshold (waterLevelLowThreshold).The status of the water level and system operation is displayed via the Serial Monitor for debugging and monitoring purposes.

you can also see that working demonstration video of our model .



# PROCEDURE:

## STEP 1: Gather Components

- Arduino Uno – The microcontroller to control the system.
- IR Sensor – For detecting objects near the dispenser.
- Water Level Sensor – To measure the water level in the tank.
- 9-V Water Pump – To dispense water.
- Relay Module (2 Relays) – To control the water pump and refill mechanism.
- Power Supply (9V) – To power the pump and Arduino.
- Wires and Jumper Cables – For connecting the components.
- Breadboard (optional) – For easy wiring and prototyping.
- Water Container/Tank – To store water.

##STEP 2: Circuit Assembly

Follow the steps to connect the components to the Arduino.

### IR Sensor:
- VCC: Connect to 5V on the Arduino.
- GND: Connect to GND on the Arduino.
- OUT: Connect to digital pin 2 on the Arduino.

### Water Level Sensor:
- VCC: Connect to 5V on the Arduino.
- GND: Connect to GND on the Arduino.
- OUT/Signal: Connect to analog pin A0 on the Arduino.

### Water Pump Relay:
- VCC: Connect to 5V on the Arduino.
- GND: Connect to GND on the Arduino.
- IN1 (control): Connect to digital pin 8 on the Arduino.
- NO (Normally Open): Connect to the positive terminal of the 9V water pump.
- COM (Common): Connect to the 9V power supply.

### Refill Pump Relay:
- VCC: Connect to 5V on the Arduino.
- GND: Connect to GND on the Arduino.
- IN2 (control): Connect to digital pin 9 on the Arduino.
- NO (Normally Open): Connect to the positive terminal of the refill mechanism (another pump or valve).
- COM (Common): Connect to the 9V power supply.

### Power Supply:
Use a 9V battery or power adapter for the water pump, ensuring that the pump relay controls the flow of current to the pump.

### Arduino Power:
Power the Arduino either through the USB port (from your PC) or use a separate 9V power adapter for standalone operation.

## STEP 3: Install Arduino IDE

Connect your Arduino Uno to the computer using a USB cable.

## STEP 4: Upload the Code

Open the Arduino IDE.
Copy and paste the following code into the IDE editor:
Select the Arduino Uno board and the correct COM port from the Tools menu in the IDE.
Click the Upload button to upload the code to the Arduino.

## STEP 5: Verify the Correct working of the project