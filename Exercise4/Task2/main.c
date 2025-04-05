/*
Name: Aaron Hirtle
Date: 3/31/2025
W#: W0140078
Exercise 4

Task2: Discount Calculator for Online Shopping

Scenario: An e-commerce website applies a discount based on the total purchase amount. 
Write a C program to calculate the final price after discount.
*/

#include <stdio.h>

int main() {
    float totalAmount, discount, finalAmount;

    printf("Enter your total: ");
    scanf("%f", &totalAmount);

    if (totalAmount > 100) {
        discount = 0.10; // 10% discount
    } else if (totalAmount >= 50) {
        discount = 0.05; // 5% discount
    } else {
        discount = 0.0; // No discount
    }

    finalAmount = totalAmount - (totalAmount * discount);

    printf("Discount applied: %.0f%%\n", discount * 100);
    printf("Final total: %.2f\n", finalAmount);

    return 0;
}

