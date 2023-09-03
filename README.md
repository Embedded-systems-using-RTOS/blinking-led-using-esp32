# ESP32 LED Blinking with FreeRTOS and ESP-IDF

Welcome to the ESP32 LED Blinking project! In this repository, you'll find all the code and resources you need to create a simple yet fundamental example of LED blinking on an ESP32 microcontroller. We've chosen to leverage the power of FreeRTOS and the ESP-IDF IoT framework to make this project as efficient as possible.

## What This Project Covers

- **Platform**: ESP32 microcontroller.
- **Framework**: ESP-IDF (Espressif IoT Development Framework).
- **Operating System**: FreeRTOS.
- **Language**: C.

## Getting Started

To get started with this project, follow these steps:

1. Clone or download this repository: git clone https://github.com/your-username/esp32-led-blink.git

2. Run the `./install.sh` script to download all the necessary dependencies for ESP-IDF.

3. Run the `. ./export` command to set up your environment for running IDF.py.

4. Configure the build file to target the ESP32 by running: idf.py set-target esp32

5. Build the project by running: idf.py build

6. Flash the compiled code to your ESP32 board using the following command, replacing `(name of your board)` with the appropriate board name: idf.py -p (name of your board) flash
   
7. Monitor the output of your ESP32 by running: idf.py monitor




This will display the log messages and allow you to observe the LED blinking on your ESP32.

Feel free to explore, modify, and learn from this project. Happy coding!







