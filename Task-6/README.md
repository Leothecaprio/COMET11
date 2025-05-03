## 📘 Context: Based on GATE EC 2009 – Question 59

This project is a hardware implementation of a digital logic problem from **GATE Electronics and Communication Engineering (EC) 2009, Question 59**.

### 🧩 Problem Statement

A vending machine sells **two products** using **two push buttons**:

* `P₁` → Product 1
* `P₂` → Product 2

The machine uses a **7-segment display** to show the **price** of the selected product based on button inputs:

| Button State      | Display | Meaning         |
| ----------------- | ------- | --------------- |
| No button pressed | `0`     | Rs. 0           |
| Only `P₁` pressed | `2`     | Rs. 2           |
| Only `P₂` pressed | `5`     | Rs. 5           |
| Both pressed      | `E`     | Error condition |

The machine logic is implemented such that the correct 7-segment encoding is generated for each case, and **logic conflicts** (both buttons pressed) are handled gracefully by displaying an **error (`E`)**.

### 🔆 7-Segment Display Mapping

| Character | Segments Lit     |
| --------- | ---------------- |
| `0`       | a, b, c, d, e, f |
| `2`       | a, b, g, e, d    |
| `5`       | a, f, g, c, d    |
| `E`       | a, f, g, e, d    |


