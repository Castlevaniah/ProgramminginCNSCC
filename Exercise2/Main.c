/*
 * ===========================================================
 * Name    : Aaron Hirtle
 * Date    : 2025-01-15
 * Course  : Programming in C
 * Exercise: #2
 * ===========================================================
 */

#include <stdio.h>

int main() {
    // Circle radius
    float radius = 5.0;

    // Pi constant
    const double pi = 3.141592653589793;

    // Calculate circumference
    double circumference = 2 * pi * radius;

    // Convert circumference to integer
    int int_circumference = (int)circumference;

    // Planck's constant
    double plancks_constant = 6.62607015e-34;

    // Output values
    printf("Circle Radius: %.2f\n", radius);
    printf("Circle Circumference: %.3f\n", circumference);
    printf("Circumference Integer: %d\n", int_circumference);
    printf("Planck's constant: %e\n", plancks_constant);

    return 0;
}
