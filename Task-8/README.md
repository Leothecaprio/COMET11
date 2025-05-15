
Here is a complete README.md file for your project, formatted in Markdown and ready to include in your repository:

````markdown
# ESP32 (VAMAN) + 1602A LCD + PlatformIO Setup Guide

This guide outlines how to connect a 1602A LCD to the ESP32 on the VAMAN FPGA board, program the ESP32 using CP2102 USB-UART from Ubuntu, and use PlatformIO to upload code.

---

## 🧩 1. LCD to ESP32 (VAMAN) Wiring (4-bit Mode)

| LCD Pin | Function         | ESP32 GPIO (VAMAN) | Notes                               |
|---------|------------------|--------------------|-------------------------------------|
| 1       | GND              | GND                | Ground                              |
| 2       | VCC              | 5V                 | Power supply                        |
| 3       | V0               | Potentiometer      | LCD contrast control (10k pot)      |
| 4       | RS               | GPIO33             | Register Select                     |
| 5       | RW               | GND                | Always GND (write mode)             |
| 6       | E                | GPIO32             | Enable pin                          |
| 11      | D4               | GPIO25             | Data 4                              |
| 12      | D5               | GPIO26             | Data 5                              |
| 13      | D6               | GPIO27             | Data 6                              |
| 14      | D7               | GPIO14             | Data 7                              |
| 15      | LED+             | 5V (via resistor)  | Backlight + (use 220Ω resistor)     |
| 16      | LED-             | GND                | Backlight -                         |

📌 **Note:** Use a 10k potentiometer between V0 and GND/VCC for contrast control. A 220Ω resistor is recommended for the LCD backlight.

---

## 🔌 2. ESP32 to Ubuntu via CP2102 (USB-UART)

### CP2102 to ESP32 (VAMAN) UART Wiring

| CP2102 Pin | ESP32 Pin (VAMAN) | Description         |
|------------|-------------------|---------------------|
| TXD        | RX (GPIO3)        | CP2102 TX → ESP32 RX|
| RXD        | TX (GPIO1)        | CP2102 RX ← ESP32 TX|
| GND        | GND               | Common ground       |
| VCC (5V)   | VIN               | Power supply        |

⚠️ Make sure TX ↔ RX and RX ↔ TX are crossed properly.

### Boot Mode for Programming

| ESP32 Pin | Connect to       | Purpose                |
|-----------|------------------|------------------------|
| GPIO0     | GND (with switch)| Enter bootloader mode  |
| EN (RST)  | GND (momentary)  | Reset to boot mode     |

---

## 🧰 PlatformIO on Ubuntu (CLI Workflow)

### 🔹 Step 1: Install PlatformIO

```bash
pip install platformio
````

If permission is denied, try:

```bash
pip install --user platformio
# or
sudo pip install platformio
```

Verify installation:

```bash
platformio --version
```

---

### 🔹 Step 2: Create a New Project

```bash
platformio init --board esp32dev
```

This creates a structure like:

```
project/
├── include/         # Header files
├── lib/             # Custom libraries
├── src/             # Source code
│   └── main.cpp     # Your program
├── platformio.ini   # Configuration
```

---

### 🔹 Step 3: Write Your Program

Example: Blink LED on GPIO2

```cpp
#include <Arduino.h>

void setup() {
  pinMode(2, OUTPUT);
}

void loop() {
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  delay(1000);
}
```

Save in: `src/main.cpp`

---

### 🔹 Step 4: Upload Code to ESP32

Connect ESP32 in boot mode and run:

```bash
platformio run --target upload
```

---

### 🔹 Step 5: Give Access to Serial Port

Ubuntu restricts `/dev/ttyUSB0` access. To fix:

```bash
sudo usermod -aG dialout $USER
```

Then reboot or log out and back in.

Check with:

```bash
groups
```

You should see `dialout` listed.

---

