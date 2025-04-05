/*
Name: Aaron Hirtle
Date: 3/31/2025
W#: W0140078
Exercise 4

Task 3: Restaurant Order System

Scenario: A restaurant wants a system to repeatedly take orders from customers until they choose to exit.
*/

#include <stdio.h>

int main() {
    int choice;
    double totalBill = 0;

    do {
        printf("Monster Menu:\n");
        printf("1. Mega Burger - $15\n");
        printf("2. Power Pizza - $20\n");
        printf("3. Super Salad - $10\n");
        printf("4. Exit\n\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                totalBill += 15; 
                break;
            case 2:
                totalBill += 20; 
                break;
            case 3:
                totalBill += 10; 
                break;
            case 4:
                break; 
            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 4);

    printf("\nYour total: $%.2lf\n", totalBill);

    return 0;
}