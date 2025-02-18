# C Programming Operations and User Input

This C program demonstrates basic arithmetic operations, modulus operation, character handling, user input, and increment/decrement operations.

## Author

- Name: Aaron Hirtle
- Date: 2025-01-27
- Course: Programming in C
- Exercise: #3

## Code Explanation

The program is divided into several parts:

1. **Part One: Basic Arithmetic Operations**  
   - Performs addition, subtraction, multiplication, and division on two floating-point numbers (`a` and `b`).

2. **Part Two: Modulus Operation**  
   - Demonstrates the modulus operation using integers.

3. **Part Three: Character and ASCII**  
   - Displays a character and its corresponding ASCII value.

4. **Part Four: User Input**  
   - Prompts the user to enter an integer and a float value, then displays the entered values.

5. **Part Five: Increment/Decrement Operations**  
   - Shows how to use pre- and post-increment operations on an integer.

## How to Run

1. Save the code in a file named `operations_input.c`.
2. Open a terminal or command prompt.
3. Navigate to the directory containing the file.
4. Compile the program by running:
   ```
   gcc operations_input.c -o operations_input
   ```
5. Run the program by executing:
   ```
   ./operations_input
   ```

## Output Example

```
************ PART ONE ************
Sum of 5.00 and 10.00 is 15.00
Subtraction of 5.00 and 10.00 is -5.00
Multiplication of 5.00 and 10.00 is 50.00
Division of 5.00 and 10.00 is 0.50
************ PART TWO ************
Result of Modulus 10 and 5 is 0
************ PART THREE ************
The Letter of the Day is: A
ASCII value is: 65
************ PART FOUR ************
Enter Integer Value for X: 7
Enter Float Value for Y: 3.14
Integer = 7, Float = 3.14
************ PART FIVE ************
Initial value of num: 5
Value of num after pre-increment (++num): 6
Value of num before post-increment (num++): 6
Value of num after post-increment (num++): 6
Final value of num after post-increment: 7
```

## Description

This program introduces several basic concepts in C programming, including arithmetic operations, working with characters and ASCII values, handling user input, and demonstrating increment and decrement operators.
```
