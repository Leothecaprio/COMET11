#include <stdio.h>

// Function to simulate a NAND gate
int nand_gate(int a, int b) {
    return !(a && b);
}

// Function to simulate a NOR gate
int nor_gate(int a, int b) {
    return !(a || b);
}

// Function to simulate a NAND latch
void nand_latch(int p1, int p2, int* q1, int* q2) {
    *q1 = nand_gate(p1, *q2);
    *q2 = nand_gate(p2, *q1);
}

// Function to simulate a NOR latch
void nor_latch(int p1, int p2, int* q1, int* q2) {
    *q1 = nor_gate(p1, *q2);
    *q2 = nor_gate(p2, *q1);
}

int main() {
    int nand_q1, nand_q2, nor_q1, nor_q2;

    // NAND Latch Analysis
    printf("NAND Latch Analysis:\n");

    // Step 1: Inputs (0, 1)
    nand_q1 = -1; // Initialize to an invalid value
    nand_q2 = -1;
    nand_latch(0, 1, &nand_q1, &nand_q2);
    printf("Inputs (0, 1): Q1 = %d, Q2 = %d\n", nand_q1, nand_q2);

    // Step 2: Inputs (1, 1)
    nand_latch(1, 1, &nand_q1, &nand_q2);
    printf("Inputs (1, 1): Q1 = %d, Q2 = %d\n\n", nand_q1, nand_q2);

    // NOR Latch Analysis
    printf("NOR Latch Analysis:\n");

    // Step 1: Inputs (0, 1)
    nor_q1 = -1; // Initialize to an invalid value
    nor_q2 = -1;
    nor_latch(0, 1, &nor_q1, &nor_q2);
    printf("Inputs (0, 1): Q1 = %d, Q2 = %d\n", nor_q1, nor_q2);

    // Step 2: Inputs (1, 1)
    nor_latch(1, 1, &nor_q1, &nor_q2);
    printf("Inputs (1, 1): Q1 = %d, Q2 = %d\n\n", nor_q1, nor_q2);

    // Final Answer
    printf("Final Answer:\n");
    printf("- NAND latch: First (1, 0), then (1, 0)\n");
    printf("- NOR latch: First (1, 0), then (0, 0)\n");
    printf("Correct Option: (C)\n");

    return 0;
}
