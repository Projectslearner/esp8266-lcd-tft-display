# ESP8266 LCD TFT Display Project

#### Project Overview
This project demonstrates how to interface a TFT LCD display (specifically the ILI9341) with an ESP8266 microcontroller. The TFT display provides a vibrant and colorful output suitable for various graphical applications.

#### Components Needed
- **ESP8266 Microcontroller**
- **TFT LCD Display (ILI9341)**
- **Jumper Wires**
- **Optional: Breadboard**
- **Optional: 5V Power Supply for TFT LED**

#### Circuit Setup
1. **Connecting the TFT Display to ESP8266:**
   - **TFT_CS:** Connect to D8 on ESP8266.
   - **TFT_RST:** Connect to D9 on ESP8266.
   - **TFT_DC:** Connect to D10 on ESP8266.
   - **TFT_MOSI:** Connect to D7 on ESP8266.
   - **TFT_SCK:** Connect to D5 on ESP8266.
   - **TFT_LED:** Optionally, connect to D6 on ESP8266 for TFT LED (if supported).

#### Instructions
1. **Setup:**
   - Open the Arduino IDE with ESP8266 board support installed.
   - Install necessary libraries (`Adafruit_GFX` and `Adafruit_ILI9341`).
   - Create a new sketch and paste the provided Arduino code.
   - Connect the ESP8266 to your computer, select the appropriate board and port from the Tools menu.
   - Upload the code to the ESP8266.

2. **Testing:**
   - After uploading the code, the TFT display should:
     - Initialize with a black screen.
     - Display "ESP8266 TFT Display" at coordinates (20, 20).
     - Draw a white rectangle (10, 60, width 100, height 50).
     - Draw a filled green circle centered at (120, 90) with radius 20.

3. **Customization:**
   - Adjust text size, colors, positions, and graphic elements as needed in the `setup()` function.
   - Implement dynamic content updates in the `loop()` function as per project requirements.

#### Applications
- **Graphical User Interfaces:** Create custom interfaces for IoT projects.
- **Data Visualization:** Display sensor data, graphs, and charts.
- **Interactive Displays:** Implement touch functionality for user interaction (if supported by TFT module).

#### Notes
- **TFT Library:** Ensure the `Adafruit_ILI9341` library is compatible with your TFT module.
- **Power Supply:** Provide sufficient power to the ESP8266 and the TFT module, especially if using the TFT LED.

---

#### Useful Links
🌐 [ProjectsLearner - ESP8266 LCD TFT Display](https://projectslearner.com/learn/esp8266-lcd-tft-display)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Crafted for you with ❤️ from ProjectsLearner