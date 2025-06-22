# 🚦 Traffic VAC - Smart Vehicle Alert and Control System

Traffic VAC (Vehicle Alert and Control) is an Arduino-based system designed to detect vehicle presence, monitor traffic flow, and manage visual alerts using LED indicators and buzzers. It can be used for smart traffic control.



## 🛠️ Components Used

| Component        | Quantity |
|------------------|----------|
| Arduino Uno/Nano | 1        |
| IR Sensor        | 1        |
| RGB LED          | 1        |
| Buzzer           | 1        |
| Resistors        | 3        |
| Jumper Wires     | –        |
| Breadboard       | 1        |

## 🔌 Circuit Diagram


  IR Sensor --- D2 (interrupt)<br>
  Red LED   --- D5<br>
  Blue LED  --- D6<br>
  Green LED --- D7<br>
  Buzzer    --- D6


	> Note: AttachInterrupt used on pin D2 for real-time vehicle detection.

## 💡 How It Works

1. The IR sensor detects a vehicle.
2. An interrupt is triggered on pin D2.
3. RGB LEDs light up based on system status:
   - Red: Vehicle detected
   - Green: No vehicle
4. Buzzer gives audio feedback when a vehicle is detected.
