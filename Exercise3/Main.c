/*
 * ===========================================================
 * Name    : Aaron Hirtle
 * Date    : 2025-01-27
 * Course  : Programming in C
 * Exercise: #3
 * ===========================================================
 */


#include <stdio.h>

int main() {
    // Declare variables
    float a = 5.0, b = 10.0;
    float additionResult = a + b, subtractionResult = a - b;
    float multiplicationResult = a * b, divisionResult = a / b;
    char letter = 'A';
    int x, num = 5;
    float y;

    // Part One: Basic Arithmetic Operations
    puts("************ PART ONE ************");
    printf("Sum of %.2f and %.2f is %.2f\n", a, b, additionResult);
    printf("Subtraction of %.2f and %.2f is %.2f\n", a, b, subtractionResult);
    printf("Multiplication of %.2f and %.2f is %.2f\n", a, b, multiplicationResult);
    printf("Division of %.2f and %.2f is %.2f\n", a, b, divisionResult);
    
    // Part Two: Modulus Operation
    puts("************ PART TWO ************");
    printf("Result of Modulus 10 and 5 is %d\n", 10 % 5);
    
    // Part Three: Character and ASCII
    puts("************ PART THREE ************");
    printf("The Letter of the Day is: %c\n", letter);
    printf("ASCII value is: %d\n", letter);
    
    // Part Four: User Input
    puts("************ PART FOUR ************");
    printf("Enter Integer Value for X: ");
    scanf("%d", &x);
    printf("Enter Float Value for Y: ");
    scanf("%f", &y);
    printf("Integer = %d, Float = %.2f\n", x, y);

    // Part Five: Increment/Decrement Operations
    puts("************ PART FIVE ************");
    printf("Initial value of num: %d\n", num);
    printf("Value of num after pre-increment (++num): %d\n", ++num);
    printf("Value of num before post-increment (num++): %d\n", num);
    printf("Value of num after post-increment (num++): %d\n", num++);
    printf("Final value of num after post-increment: %d\n", num);

    return 0;
}
