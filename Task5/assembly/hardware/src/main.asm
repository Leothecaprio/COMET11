.equ DDRD = 0x0A
.equ PORTD = 0x0B
.equ PIND = 0x09

.equ DDRB = 0x04
.equ PORTB = 0x05
.equ PINB = 0x03

;---------------------------------
; Pin Definitions
;---------------------------------
.def temp = r16
.def index = r17
.def pattern = r18

;---------------------------------
; Segment Patterns (Common Anode)
; LOW = ON
; Format: A B C D E F G (segments connected to PD2-PD7, PB0)

; 0 = 0b0000001 => 0x01
; 2 = 0b0010010 => 0x12
; 5 = 0b0100100 => 0x24
; E = 0b0110000 => 0x30

;---------------------------------
.cseg
.org 0x00
rjmp RESET

RESET:
    ; Initialize segment pins as OUTPUT
    ldi temp, 0b11111100    ; PD2-PD7 as output (A-F)
    out DDRD, temp

    ldi temp, 0b00000001    ; PB0 as output (G)
    out DDRB, temp

    ; Initialize button pins as INPUT with pull-ups
    ldi temp, 0b00000110    ; PB1 & PB2 as input
    out DDRB, temp

    ldi temp, 0b00000110    ; Enable pull-up resistors on PB1 & PB2
    out PORTB, temp

MAIN_LOOP:
    ; Read buttons (PINB), inverted logic: 0 = pressed
    in temp, PINB
    andi temp, 0b00000110    ; Mask PB1 and PB2

    cpi temp, 0b00000110
    breq SHOW_0          ; No buttons pressed

    cpi temp, 0b00000100
    breq SHOW_2          ; Only P1 pressed (PB1 = 0)

    cpi temp, 0b00000010
    breq SHOW_5          ; Only P2 pressed (PB2 = 0)

    ; Else: both pressed
SHOW_E:
    ldi pattern, 0b00110000 ; 'E': F, E, D ON (PD5, PD6, PD3)
    rjmp DISPLAY

SHOW_0:
    ldi pattern, 0b00000001 ; '0': all except G on
    rjmp DISPLAY

SHOW_2:
    ldi pattern, 0b00010010 ; '2'
    rjmp DISPLAY

SHOW_5:
    ldi pattern, 0b00100100 ; '5'
    rjmp DISPLAY

DISPLAY:
    ; Write pattern to PD2–PD7
    ldi temp, 0b11111100
    and temp, pattern
    out PORTD, temp

    ; Write G segment to PB0
    mov temp, pattern
    andi temp, 0b00000001
    out PORTB, temp

    rjmp MAIN_LOOP
