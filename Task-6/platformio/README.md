# 🚀 Arduino Vending Machine – Compile & Upload Guide

This guide explains how to **compile** your Arduino `.cpp` or `.S` (assembly) project using **PlatformIO**, and **upload the generated `.hex` file** to the Arduino Uno board using either **AVRDUDE** or the **Arduino IDE’s internal tools**.

---

## ⚙️ 🧱 Compilation on Termux (or Linux)

Follow these steps to create, configure, and build your Arduino project using PlatformIO on Termux (Android) or Linux.

### 🔨 Step-by-Step Instructions

```bash
# 1. Create a new directory
mkdir vending-machine
cd vending-machine

# 2. Initialize a PlatformIO project for Arduino Uno
pio project init --board uno

# 3. Create your code file (example path)
cd src
nano arc/main.cpp   # or main.S for Assembly

# 4. Save and return, then run the build
cd ../..   # return to project root
pio run    # make sure PlatformIO is installed and accessible
```

✅ **After a successful build**, your compiled `.hex` file will be located at:

```
.pio/build/uno/firmware.hex
```

📦 Output example:

```
Building .pio/build/uno/firmware.hex
```

---

## 🔄 Uploading `.hex` File to Arduino Uno

You can upload your `.hex` file using two methods:

---

## 🅰️ OPTION 1: Upload Using AVRDUDE (Recommended)

### 📌 Windows Instructions

1. **Install AVRDUDE:**

* ✅ Option A: Install via Chocolatey

  ```powershell
  choco install avrdude
  ```

* ✅ Option B: Download [WinAVR](https://sourceforge.net/projects/winavr/) or standalone AVRDUDE binary.

2. **Navigate to your `.hex` file location:**

   ```cmd
   cd path\to\your\firmware.hex
   ```

3. **Upload the firmware:**

   ```cmd
   avrdude -c arduino -p m328p -P COM5 -b 115200 -U flash:w:firmware.hex:i
   ```

   🔁 Replace `COM5` with your actual Arduino port (check in Device Manager).

---

### 📌 Linux Instructions

1. **Install avrdude:**

   ```bash
   sudo apt install avrdude
   ```

2. **Find your Arduino’s serial port:**

   ```bash
   ls /dev/tty*
   # Look for /dev/ttyUSB0 or /dev/ttyACM0
   ```

3. **Upload your firmware:**

   ```bash
   avrdude -c arduino -p m328p -P /dev/ttyUSB0 -b 115200 -U flash:w:firmware.hex:i
   ```

   🔁 Replace `/dev/ttyUSB0` with the actual detected port.

---

## 🅱️ OPTION 2: Upload Using Arduino IDE's Internal AVRDUDE

The Arduino IDE does **not** allow uploading `.hex` files via its graphical UI, but you can use its built-in **avrdude** tool manually.

### 📌 Windows Instructions

1. **Find the avrdude executable path**, usually:

   ```
   C:\Program Files (x86)\Arduino\hardware\tools\avr\bin\
   ```

2. **Run the upload command from Command Prompt:**

   ```cmd
   "C:\Program Files (x86)\Arduino\hardware\tools\avr\bin\avrdude" ^
   -C "C:\Program Files (x86)\Arduino\hardware\tools\avr\etc\avrdude.conf" ^
   -v -patmega328p -carduino -P COM5 -b115200 -D -Uflash:w:firmware.hex:i
   ```

🔁 Replace:

* `COM5` with your Arduino port.
* Paths if your Arduino IDE is installed in a different location.

---

## ✅ Summary Table

| OS          | Upload Method          | Command Example                                                                   |
| ----------- | ---------------------- | --------------------------------------------------------------------------------- |
| Windows     | AVRDUDE (choco/WinAVR) | `avrdude -c arduino -p m328p -P COM5 -b 115200 -U flash:w:firmware.hex:i`         |
| Linux       | AVRDUDE                | `avrdude -c arduino -p m328p -P /dev/ttyUSB0 -b 115200 -U flash:w:firmware.hex:i` |
| Arduino IDE | Internal avrdude (CLI) | Use full path to `avrdude` and `avrdude.conf` as shown in example above           |
