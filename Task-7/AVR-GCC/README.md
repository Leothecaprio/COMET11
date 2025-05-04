````markdown
# 🔌 AVR-GCC Project: EE2009 GATE Question 13 Logic Simulation

This project demonstrates the use of **AVR-GCC** to implement **logic gate behavior (NAND and NOR)** using push buttons and LEDs on an **ATmega328P** microcontroller. It is based on **Question 13 from the EE2009 GATE paper**.

---

## 🧪 Logic Truth Table

| **P1** | **P2** | **LED1 (NAND Output)** | **LED2 (NOR Output)** |
|--------|--------|------------------------|------------------------|
| 0      | 0      | 1 (ON)                 | 1 (ON)                 |
| 0      | 1      | 1 (ON)                 | 0 (OFF)                |
| 1      | 0      | 1 (ON)                 | 0 (OFF)                |
| 1      | 1      | 0 (OFF)                | 0 (OFF)                |

- **P1 and P2**: Push buttons (logic inputs).
- **LED1**: Displays the result of `NAND(P1, P2)`.
- **LED2**: Displays the result of `NOR(P1, P2)`.

---

## 🔧 Hardware Setup

| Component         | Description                                                  |
|------------------|--------------------------------------------------------------|
| Microcontroller   | ATmega328P (on Arduino Uno)                                 |
| Push Buttons      | 2 buttons with pull-down resistors to digital input pins     |
| LEDs              | 2 LEDs with 220Ω resistors connected to output pins          |
| Power             | USB connection to PC or external 5V supply                   |

**Suggested Pin Connections**:
- `P1` → Digital Pin 2 (Input)
- `P2` → Digital Pin 3 (Input)
- `LED1` → Digital Pin 8 (Output)
- `LED2` → Digital Pin 9 (Output)

---

## 💻 Tools Required

Install these tools on a Linux system (e.g., Ubuntu):

```bash
sudo apt update
sudo apt install avr-gcc avr-libc avrdude
````

---

## 🚀 Build and Upload Instructions

### 1. 📝 Create your C source file:

```bash
nvim gcc.c
```

### 2. 🛠️ Compile the code:

```bash
avr-gcc -mmcu=atmega328p -Os -o gcc.elf gcc.c
```

### 3. 📦 Convert ELF to HEX:

```bash
avr-objcopy -O ihex gcc.elf gcc.hex
```

### 4. 🔥 Flash the code to the Arduino Uno:

```bash
avrdude -c arduino -p m328p -P /dev/ttyACM0 -b 115200 -U flash:w:gcc.hex
```

> ✅ If successful, you will see:

```
avrdude done.  Thank you.
```

---

## 🧾 Notes

* Replace `/dev/ttyACM0` with the correct port if different (e.g., `/dev/ttyUSB0`).
* Use `ls /dev/tty*` to identify your serial port.
* Ensure Arduino is connected and not used by other tools (like Arduino IDE).

---