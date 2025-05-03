Here's an AVR assembly language implementation for the vending machine logic described in the GATE EC 2009 – Question 59.

🎯 Objective
Detect the state of two push buttons P1 and P2, and based on their combination, output the correct 7-segment code on a common cathode display.

🧩 Button Logic Summary
Button P1	Button P2	Display	Meaning	Segment Code (abcdefg)	Hex Code
0	0	0	Rs. 0	0b00111111	0x3F
1	0	2	Rs. 2	0b01011011	0x5B
0	1	5	Rs. 5	0b01101101	0x6D
1	1	E	Error	0b01111001	0x79

🛠️ Hardware Assumptions
PORTD: Input port for buttons
PD0 → Button P1
PD1 → Button P2
PORTC: Output port connected to the 7-segment display (segments a–g on PC0–PC6)

🔌 Hardware Connections
Pin	Function
PD0	Button P1 input
PD1	Button P2 input
PC0–PC6	7-segment a–g
GND	Button and display ground
Pull-down or pull-up resistors as needed	