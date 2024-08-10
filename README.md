# Smart Home Automation

This project is a simple Arduino-based smart home automation system that allows you to control a light bulb and a table fan using a smartphone via serial communication.

## Features

- **Light Bulb Control**: Turn the light bulb ON or OFF.
- **Table Fan Control**: Turn the table fan ON or OFF.
- **Easy to Use**: Control the devices using serial commands from your smartphone or computer.

## Components Required

- Arduino board
- Light bulb (connected to pin 13)
- Table fan (connected to pin 12)
- Relay modules (for controlling the light bulb and fan)
- Smartphone or computer for sending serial commands

## Getting Started

### Prerequisites

Before you begin, ensure you have the following:

- Arduino IDE installed on your computer.
- Basic understanding of how to connect and use relay modules with an Arduino.
- A serial communication app on your smartphone or a serial monitor tool on your computer (like the one built into the Arduino IDE).

### Installation

1. **Clone the Repository**
   ```sh
   git clone https://github.com/your-username/Smart-Home-Automation.git
   cd Smart-Home-Automation
# Smart Home Automation

This project is a simple Arduino-based smart home automation system that allows you to control a light bulb and a table fan using a smartphone via serial communication.

## Features

- **Light Bulb Control**: Turn the light bulb ON or OFF.
- **Table Fan Control**: Turn the table fan ON or OFF.
- **Easy to Use**: Control the devices using serial commands from your smartphone or computer.

## Components Required

- Arduino board
- Light bulb (connected to pin 13)
- Table fan (connected to pin 12)
- Relay modules (for controlling the light bulb and fan)
- Smartphone or computer for sending serial commands

## Getting Started

### Prerequisites

Before you begin, ensure you have the following:

- Arduino IDE installed on your computer.
- Basic understanding of how to connect and use relay modules with an Arduino.
- A serial communication app on your smartphone or a serial monitor tool on your computer (like the one built into the Arduino IDE).

### Installation

1. **Clone the Repository**
   ```sh
   git clone https://github.com/your-username/Smart-Home-Automation.git
   cd Smart-Home-Automation
2. **Upload the Code to Arduino**
  Open the SmartHomeControl.ino file in the Arduino IDE.
  Connect your Arduino board to your computer.
  Select the appropriate board and port from the Tools menu in the Arduino IDE.
  Click the upload button to upload the code to your Arduino.
**Wiring Diagram**
  Light Bulb: Connect the relay module controlling the light bulb to pin 13 of the Arduino.
  Table Fan: Connect the relay module controlling the table fan to pin 12 of the Arduino.
  Power Supply: Ensure both the light bulb and fan are connected to a suitable power supply through the relay modules.
**Usage**
  Once the code is uploaded and everything is wired correctly, you can control the devices using serial commands:

**Light Bulb Control:**
  Send 1 to turn the light bulb ON.
  Send 2 to turn the light bulb OFF.
**Table Fan Control:**
  Send 3 to turn the table fan ON.
  Send 4 to turn the table fan OFF.
**Serial Commands**
  Use a Bluetooth application such as 'Arduino Bluetooth' to send these commands to the Arduino. Make sure the baud rate is set to 9600.

1: Turns the light bulb ON.
2: Turns the light bulb OFF.
3: Turns the table fan ON.
4: Turns the table fan OFF.
