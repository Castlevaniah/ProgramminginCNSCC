/*
 * ===========================================================
 * Name    : Aaron Hirtle
 * Date    : 4/5/2025
 * Course  : Programming in C
 * Exercise: #5 Task 1
 * ===========================================================
 */

#include <stdio.h>
#include <string.h>

#define NUM_STUDENTS 5

int main() {
    char names[NUM_STUDENTS][50];
    float grades[NUM_STUDENTS];
    float sum = 0.0, average, highest, lowest;
    char highest_name[50], lowest_name[50];

    printf("Enter names and grades for %d students:\n", NUM_STUDENTS);
    
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Student %d name: ", i + 1);
        scanf(" %49[^\n]", names[i]);  
        printf("%s's grade: ", names[i]);
        scanf("%f", &grades[i]);
        sum += grades[i];
    }

    average = sum / NUM_STUDENTS;
    
    highest = lowest = grades[0];
    strcpy(highest_name, names[0]);
    strcpy(lowest_name, names[0]);

    for (int i = 1; i < NUM_STUDENTS; i++) {
        if (grades[i] > highest) {
            highest = grades[i];
            strcpy(highest_name, names[i]);
        }
        if (grades[i] < lowest) {
            lowest = grades[i];
            strcpy(lowest_name, names[i]);
        }
    }

    printf("\nAverage grade: %.2f\n", average);
    printf("Highest grade: %s with %.2f\n", highest_name, highest);
    printf("Lowest grade: %s with %.2f\n", lowest_name, lowest);

    return 0;
}
