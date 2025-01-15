# Automatic Water Dispenser

An IoT-enabled system designed to automate water dispensing and refilling using Arduino, IR sensors, and water level sensors. This project ensures efficient water management by eliminating manual intervention, making it suitable for household, industrial, and agricultural applications.

---

## 📋 Project Overview

The **Automatic Water Dispenser** automates the process of dispensing water when needed and refilling the water container when it reaches a low threshold. The system uses an **IR sensor** to detect a water cup's presence and a **water level sensor** to monitor the water levels in the container. When the water level drops, a pump is activated to refill the container automatically.

---

## ✨ Features

- **Automatic Water Dispensing**: Detects the presence of a cup and dispenses water.
- **Real-time Monitoring**: Continuously monitors water levels in the container.
- **Smart Refilling**: Automatically refills the container when the water level drops below the threshold.
- **IoT Integration**: Arduino-based system with simple yet effective automation.
- **Cost-effective Design**: Uses readily available hardware components.

---

## 📌 Objectives

1. Automate the water dispensing process using an IR sensor.
2. Use a water level sensor to monitor container levels and trigger refilling when needed.
3. Prevent water wastage through precise dispensing and refilling.
4. Provide a scalable, cost-effective solution for various applications.

---

## 🛠️ Hardware Requirements

- **Arduino Uno**: Microcontroller for processing sensor data.
- **IR Sensor**: Detects the presence of a water cup.
- **Water Level Sensor**: Monitors water levels in the container.
- **Relay Module**: Controls the pump for water dispensing and refilling.
- **Water Pump**: Pumps water between the main reservoir and the container.
- **Other Components**: Jumper wires, breadboard, power supply, two water containers.

---

## 💻 Software Requirements

- **Arduino IDE**: For writing and uploading the code to the Arduino board.
- **Programming Language**: Arduino C/C++.

---

## 🚀 Setup and Usage

1. **Hardware Setup**:
   - Connect the sensors and relay module to the Arduino Uno as per the circuit diagram.
   - Ensure the water containers are properly connected to the pump.

2. **Software Setup**:
   - Install the Arduino IDE on your computer.
   - Open the provided `.ino` file in the IDE and upload it to the Arduino Uno.

3. **Run the System**:
   - Power the Arduino board and observe the system automatically dispensing water when a cup is detected.
   - Monitor the water level through the sensor and watch the automatic refilling process.

---

## 📈 Results

- **Efficient Water Dispensing**: Automatically dispenses water only when needed.
- **Reliable Refilling**: Maintains optimal water levels in the container without overflow.
- **Hands-Free Operation**: Eliminates manual intervention, making the system user-friendly.

---


## CIRCUIT DIAGRAM:

- IR Sensor: Connects to digital pin 2 of the Arduino.
- Water Level Sensor: Connects to analog pin A0 of the Arduino.
- Water Pump: Controlled by the relay connected to digital pin 8 of the Arduino.
- Refill Pump: Controlled by another relay connected to digital pin 9 of the Arduino.
- Power Supply: 9V for the pump, with the Arduino powered through either USB or an external supply.

you can refer the circuit diagram image attached in this folder.
![2_Circuit_Diagram](https://github.com/user-attachments/assets/7530338d-6f09-467d-b26e-ecccebbcc76e)


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

## STEP 2: Circuit Assembly

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

## 📚 References

- [Arduino Uno Documentation](https://www.arduino.cc/en/Guide/ArduinoUno)
- [IR Sensor Tutorial](https://www.tutorialspoint.com/arduino/arduino_ir_sensor.htm)
- [Water Level Sensor Guide](https://www.circuitdigest.com/tutorial/water-level-sensor-arduino-tutorial)

---

## 👥 Contributors
- **[Manoj S](https://github.com/Jonam-2004)**
- **[Prasanna Venkatesh S](https://github.com/anna123venkat)**
- **[Abishek S](https://github.com/Abishek9342)**  


---

## 📜 License

This project is licensed under the MIT License. See the `LICENSE` file for details.

---
