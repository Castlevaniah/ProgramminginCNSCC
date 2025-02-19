```
# Circle Circumference and Planck's Constant

This C program calculates the circumference of a circle using a given radius, converts the result to an integer, and also displays Planck's constant.

## Author

- Name: Aaron Hirtle
- Date: 2025-01-15
- Course: Programming in C
- Exercise: #2

## Code Explanation

The program performs the following steps:

1. Defines the radius of a circle (`radius`).
2. Defines the constant Pi (`pi`) for the circumference formula.
3. Calculates the circumference of the circle using the formula: `circumference = 2 * pi * radius`.
4. Converts the floating-point circumference value to an integer (`int_circumference`).
5. Displays the radius, circumference, integer-rounded circumference, and Planck's constant.

## How to Run

1. Save the code in a file named `circle_planck.c`.
2. Open a terminal or command prompt.
3. Navigate to the directory containing the file.
4. Compile the program by running:
   ```
   gcc circle_planck.c -o circle_planck
   ```
5. Run the program by executing:
   ```
   ./circle_planck
   ```

## Output Example

```
Circle Radius: 5.00
Circle Circumference: 31.416
Circumference Integer: 31
Planck's constant: 6.626070e-34
```

## Description

This program demonstrates basic mathematical operations and output formatting in C. It calculates and displays the circle's circumference, truncates it to an integer, and also includes a display of Planck's constant, showcasing the usage of constants and floating-point operations.
```
