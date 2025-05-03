.section .data
    prompt_p1: .asciz "Enter P1 (0 or 1): "
    prompt_p2: .asciz "Enter P2 (0 or 1): "
    newline: .asciz "\n\n"
    result_a: .asciz "Segment a = "
    result_b: .asciz "Segment b = "
    result_c: .asciz "Segment c = "
    result_d: .asciz "Segment d = "
    result_e: .asciz "Segment e = "
    result_f: .asciz "Segment f = "
    result_g: .asciz "Segment g = "
    display_val: .asciz "\nDisplay value: \n"
    invalid_msg: .asciz "Invalid input!\n"
    zero_display: .asciz "0\n"
    two_display: .asciz "2\n"
    five_display: .asciz "5\n"
    error_display: .asciz "E\n"
    
    // Option evaluation messages
    option_header: .asciz "\n\nOptions:\n"
    option_a: .asciz "Option (A): g = !P1 + P2, d = c + e\n"
    option_b: .asciz "Option (B): g = P1 + P2, d = c + e\n"
    option_c: .asciz "Option (C): g = !P1 + P2, e = b + c\n"
    option_d: .asciz "Option (D): g = P1 + P2, e = b + c\n"
    correct_option: .asciz "\nOption B is correct:\n"
    g_evaluation: .asciz "\n1) g = P1 + P2\n"
    d_evaluation1: .asciz "\n2) d = c + e"
    d_evaluation2: .asciz "   \nd = P2! + P1 + P2!"
    d_evaluation3: .asciz "   \nd = 1 + P2!"
    d_evaluation4: .asciz "   \nd = 1"
    
    // Truth table
    truth_table_header: .asciz "\nTruth Table:\n"
    truth_table_header2: .asciz "\nP1 P2  a  b  c  d  e  f  g\n"
    truth_table_row1: .asciz "\n 0  0  1  1  1  1  1  1  0\n"
    truth_table_row2: .asciz "\n 0  1  1  0  0  1  0  1  1\n"
    truth_table_row3: .asciz "\n 1  0  1  1  1  1  1  0  1\n"
    truth_table_row4: .asciz "\n 1  1  1  0  0  1  0  1  1\n"

.section .bss
    P1: .skip 1
    P2: .skip 1
    segments: .skip 7  // a, b, c, d, e, f, g

.section .text
    .global _start

_start:
    // Read P1
    mov x0, 1
    ldr x1, =prompt_p1
    mov x2, 18
    mov x8, 64
    svc 0
    
    mov x0, 0
    ldr x1, =P1
    mov x2, 2
    mov x8, 63
    svc 0
    
    // Read P2
    mov x0, 1
    ldr x1, =prompt_p2
    mov x2, 18
    mov x8, 64
    svc 0
    
    mov x0, 0
    ldr x1, =P2
    mov x2, 2
    mov x8, 63
    svc 0
    
    // Convert ASCII to binary values
    ldr x3, =P1
    ldrb w1, [x3]
    sub w1, w1, '0'  // P1 value in w1
    
    ldr x3, =P2
    ldrb w2, [x3]
    sub w2, w2, '0'  // P2 value in w2
    
    // Validate inputs
    cmp w1, #1
    bhi invalid_input
    cmp w2, #1
    bhi invalid_input
    
    // Calculate segment values
    // Segment a = 1 (always on)
    mov w3, #1
    add w3, w3, '0'
    ldr x4, =segments
    strb w3, [x4]
    
    // Segment b = P2bar (NOT P2)
    mvn w3, w2
    and w3, w3, #1
    add w3, w3, '0'
    ldr x4, =segments
    strb w3, [x4, #1]
    
    // Segment c = P2bar (NOT P2)
    mvn w3, w2
    and w3, w3, #1
    add w3, w3, '0'
    ldr x4, =segments
    strb w3, [x4, #2]
    
    // Segment d = 1 (always on)
    mov w3, #1
    add w3, w3, '0'
    ldr x4, =segments
    strb w3, [x4, #3]
    
    // Segment e = P1 + P2bar (P1 OR NOT P2)
    mvn w3, w2
    and w3, w3, #1
    orr w3, w3, w1
    cmp w3, #0
    cset w3, ne
    add w3, w3, '0'
    ldr x4, =segments
    strb w3, [x4, #4]
    
    // Segment f = P1bar + P2 (NOT P1 OR P2)
    mvn w3, w1
    and w3, w3, #1
    orr w3, w3, w2
    cmp w3, #0
    cset w3, ne
    add w3, w3, '0'
    ldr x4, =segments
    strb w3, [x4, #5]
    
    // Segment g = P1 + P2 (P1 OR P2)
    orr w3, w1, w2
    cmp w3, #0
    cset w3, ne
    add w3, w3, '0'
    ldr x4, =segments
    strb w3, [x4, #6]
    
    // Determine which display value to show
    cmp w1, #0
    bne p1_pressed
    cmp w2, #0
    bne p2_pressed
    
    // Neither P1 nor P2 pressed - Display "0"
    mov x0, 1
    ldr x1, =display_val
    mov x2, 14
    mov x8, 64
    svc 0
    
    mov x0, 1
    ldr x1, =zero_display
    mov x2, 2
    mov x8, 64
    svc 0
    b display_segments
    
p1_pressed:
    cmp w2, #0
    bne both_pressed
    
    // Only P1 pressed - Display "2"
    mov x0, 1
    ldr x1, =display_val
    mov x2, 14
    mov x8, 64
    svc 0
    
    mov x0, 1
    ldr x1, =two_display
    mov x2, 2
    mov x8, 64
    svc 0
    b display_segments
    
p2_pressed:
    // Only P2 pressed - Display "5" 
    mov x0, 1
    ldr x1, =display_val
    mov x2, 14
    mov x8, 64
    svc 0
    
    mov x0, 1
    ldr x1, =five_display
    mov x2, 2
    mov x8, 64
    svc 0
    b display_segments
    
both_pressed:
    // Both P1 and P2 pressed - Display "E"
    mov x0, 1
    ldr x1, =display_val
    mov x2, 14
    mov x8, 64
    svc 0
    
    mov x0, 1
    ldr x1, =error_display
    mov x2, 2
    mov x8, 64
    svc 0

display_segments:
    // Display segment a
    mov x0, 1
    ldr x1, =result_a
    mov x2, 12
    mov x8, 64
    svc 0
    
    mov x0, 1
    ldr x1, =segments
    mov x2, 1
    mov x8, 64
    svc 0
    
    mov x0, 1
    ldr x1, =newline
    mov x2, 1
    mov x8, 64
    svc 0
    
    // Display segment b
    mov x0, 1
    ldr x1, =result_b
    mov x2, 12
    mov x8, 64
    svc 0
    
    mov x0, 1
    ldr x1, =segments
    add x1, x1, #1
    mov x2, 1
    mov x8, 64
    svc 0
    
    mov x0, 1
    ldr x1, =newline
    mov x2, 1
    mov x8, 64
    svc 0
    
    // Display segment c
    mov x0, 1
    ldr x1, =result_c
    mov x2, 12
    mov x8, 64
    svc 0
    
    mov x0, 1
    ldr x1, =segments
    add x1, x1, #2
    mov x2, 1
    mov x8, 64
    svc 0
    
    mov x0, 1
    ldr x1, =newline
    mov x2, 1
    mov x8, 64
    svc 0
    
    // Display segment d
    mov x0, 1
    ldr x1, =result_d
    mov x2, 12
    mov x8, 64
    svc 0
    
    mov x0, 1
    ldr x1, =segments
    add x1, x1, #3
    mov x2, 1
    mov x8, 64
    svc 0
    
    mov x0, 1
    ldr x1, =newline
    mov x2, 1
    mov x8, 64
    svc 0
    
    // Display segment e
    mov x0, 1
    ldr x1, =result_e
    mov x2, 12
    mov x8, 64
    svc 0
    
    mov x0, 1
    ldr x1, =segments
    add x1, x1, #4
    mov x2, 1
    mov x8, 64
    svc 0
    
    mov x0, 1
    ldr x1, =newline
    mov x2, 1
    mov x8, 64
    svc 0
    
    // Display segment f
    mov x0, 1
    ldr x1, =result_f
    mov x2, 12
    mov x8, 64
    svc 0
    
    mov x0, 1
    ldr x1, =segments
    add x1, x1, #5
    mov x2, 1
    mov x8, 64
    svc 0
    
    mov x0, 1
    ldr x1, =newline
    mov x2, 1
    mov x8, 64
    svc 0
    
    // Display segment g
    mov x0, 1
    ldr x1, =result_g
    mov x2, 12
    mov x8, 64
    svc 0
    
    mov x0, 1
    ldr x1, =segments
    add x1, x1, #6
    mov x2, 1
    mov x8, 64
    svc 0
    
    mov x0, 1
    ldr x1, =newline
    mov x2, 1
    mov x8, 64
    svc 0
    
    // Display the truth table
    mov x0, 1
    ldr x1, =truth_table_header
    mov x2, 14
    mov x8, 64
    svc 0
    
    mov x0, 1
    ldr x1, =truth_table_header2
    mov x2, 21
    mov x8, 64
    svc 0
    
    mov x0, 1
    ldr x1, =truth_table_row1
    mov x2, 21
    mov x8, 64
    svc 0
    
    mov x0, 1
    ldr x1, =truth_table_row2
    mov x2, 21
    mov x8, 64
    svc 0
    
    mov x0, 1
    ldr x1, =truth_table_row3
    mov x2, 21
    mov x8, 64
    svc 0
    
    mov x0, 1
    ldr x1, =truth_table_row4
    mov x2, 21
    mov x8, 64
    svc 0
    
    // Display option evaluations
    mov x0, 1
    ldr x1, =option_header
    mov x2, 19
    mov x8, 64
    svc 0
    
    mov x0, 1
    ldr x1, =option_a
    mov x2, 37
    mov x8, 64
    svc 0
    
    mov x0, 1
    ldr x1, =option_b
    mov x2, 36
    mov x8, 64
    svc 0
    
    mov x0, 1
    ldr x1, =option_c
    mov x2, 37
    mov x8, 64
    svc 0
    
    mov x0, 1
    ldr x1, =option_d
    mov x2, 36
    mov x8, 64
    svc 0
    
    // Display correct option and evaluation
    mov x0, 1
    ldr x1, =correct_option
    mov x2, 19
    mov x8, 64
    svc 0
    
    mov x0, 1
    ldr x1, =g_evaluation
    mov x2, 15
    mov x8, 64
    svc 0
    
    mov x0, 1
    ldr x1, =d_evaluation1
    mov x2, 13
    mov x8, 64
    svc 0
    
    mov x0, 1
    ldr x1, =d_evaluation2
    mov x2, 27
    mov x8, 64
    svc 0
    
    mov x0, 1
    ldr x1, =d_evaluation3
    mov x2, 17
    mov x8, 64
    svc 0
    
    mov x0, 1
    ldr x1, =d_evaluation4
    mov x2, 10
    mov x8, 64
    svc 0
    
    // Exit program
    mov x0, 0
    mov x8, 93
    svc 0

invalid_input:
    mov x0, 1
    ldr x1, =invalid_msg
    mov x2, 15
    mov x8, 64
    svc 0
    
    mov x0, 1
    mov x8, 93
    svc 0

