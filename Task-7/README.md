## 🔍 What is AVR-GCC?

**AVR-GCC** is the GNU Compiler Collection (GCC) toolchain for programming **AVR microcontrollers** such as the **ATmega328P** used in Arduino Uno. It allows you to:

* Write programs in **C or C++**
* Compile them into machine code that the AVR microcontroller can understand
* Flash (upload) the code to the microcontroller using tools like `avrdude`

> 💡 AVR-GCC gives you full control over microcontroller behavior without relying on Arduino libraries, making it ideal for embedded systems engineers and low-level developers.

### 🧰 AVR-GCC Toolchain Includes:

* `avr-gcc`: The compiler
* `avr-objcopy`: Converts output into `.hex` files for flashing
* `avrdude`: Uploads `.hex` files to the board via USB/Serial
