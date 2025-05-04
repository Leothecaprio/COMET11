To compile and upload AVR Assembly code to an AVR microcontroller (like ATmega328P) using Ubuntu, you'll need a few tools installed and follow these steps.

🧰 Step 1: Install AVR Toolchain
#Open a terminal in Ubuntu and run:
sudo apt update
sudo apt install avr-libc avra avrdude gcc-avr

(avra: Assembler for .asm files.
avrdude: Tool to upload hex to your microcontroller.
gcc-avr and avr-libc: Not needed for pure assembly, but useful for future C code.)

📁 Step 2: Create Assembly File
#Create a new file called vending.asm:
nano vending.asm

(Paste your AVR assembly code inside and save it with Ctrl + O, then Enter, and exit with Ctrl + X.)

🛠️ Step 3: Assemble the Code
#Use avra to compile the .asm file to a .hex file:
avra vending.asm

[If successful, it generates vending.hex (among other files).]

🔌 Step 4: Upload to Microcontroller
Example: Using USBasp with ATmega328P
#Connect your microcontroller using a USBasp programmer. Then upload the hex:
avrdude -c usbasp -p m328p -U flash:w:vending.hex

#If you're using Arduino Uno as ISP, the command becomes:
avrdude -c arduino -p m328p -P /dev/ttyACM0 -b 115200 -U flash:w:main.hex:i

[Replace /dev/ttyUSB0 with your port (use dmesg | grep tty to find it).
-p m328p: Chip type ATmega328P
-U flash:w:filename.hex: Upload the hex]

✅ PART 2: Upload via XLoader on Windows
1. 📦 Download XLoader
Download XLoader from your provided link:
🔗 https://drive.google.com/file/d/1vHxDRHvvEWzwioxf1t4HfEej0HZz9pds/view?pli=1

Click the download icon in the top-right corner of the Google Drive page to get the .zip file.

2. 🖥️ Extract and Run
Extract the downloaded XLoader.zip.

Open XLoader.exe.

3. 🔌 Connect and Upload
Connect your Arduino Uno (or compatible board), then:

Field	Set To
Hex File	Browse to and select vending.hex
Device	Uno(ATmega328)
COM Port	Auto-detect or select the correct COM port
Baud rate	115200 (default for Uno)

Click Upload.

✅ If successful, it shows “XXX bytes uploaded”.
