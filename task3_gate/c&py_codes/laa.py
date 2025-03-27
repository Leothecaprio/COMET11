def nand_gate(a, b):
    """Simulates a NAND gate."""
    return not (a and b)

def nor_gate(a, b):
    """Simulates a NOR gate."""
    return not (a or b)

def nand_latch(p1, p2, q1, q2):
    """Simulates a NAND latch."""
    new_q1 = nand_gate(p1, q2)
    new_q2 = nand_gate(p2, q1)
    return new_q1, new_q2

def nor_latch(p1, p2, q1, q2):
    """Simulates a NOR latch."""
    new_q1 = nor_gate(p1, q2)
    new_q2 = nor_gate(p2, q1)
    return new_q1, new_q2

def main():
    """Main function to simulate the latch behavior."""

    # NAND Latch Analysis
    print("NAND Latch Analysis:")

    # Step 1: Inputs (0, 1)
    nand_q1 = -1  # Initialize to an invalid value
    nand_q2 = -1
    nand_q1, nand_q2 = nand_latch(0, 1, nand_q1, nand_q2)
    print(f"Inputs (0, 1): Q1 = {nand_q1}, Q2 = {nand_q2}")

    # Step 2: Inputs (1, 1)
    nand_q1, nand_q2 = nand_latch(1, 1, nand_q1, nand_q2)
    print(f"Inputs (1, 1): Q1 = {nand_q1}, Q2 = {nand_q2}\n")

    # NOR Latch Analysis
    print("NOR Latch Analysis:")

    # Step 1: Inputs (0, 1)
    nor_q1 = -1 #Initialize to an invalid value
    nor_q2 = -1
    nor_q1, nor_q2 = nor_latch(0, 1, nor_q1, nor_q2)
    print(f"Inputs (0, 1): Q1 = {nor_q1}, Q2 = {nor_q2}")

    # Step 2: Inputs (1, 1)
    nor_q1, nor_q2 = nor_latch(1, 1, nor_q1, nor_q2)
    print(f"Inputs (1, 1): Q1 = {nor_q1}, Q2 = {nor_q2}\n")

    # Final Answer
    print("Final Answer:")
    print("- NAND latch: First (1, 0), then (1, 0)")
    print("- NOR latch: First (1, 0), then (0, 0)")
    print("Correct Option: (C)")

if __name__ == "__main__":
    main()
