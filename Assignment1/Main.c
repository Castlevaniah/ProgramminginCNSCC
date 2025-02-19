/*
 * ===========================================================
 * Name    : Aaron Hirtle
 * Date    : 2025-02-19
 * Course  : Programming in C
 * Assignment 1
 * ===========================================================
 */


#include <stdio.h>

int main() {
    int totalStudents = 0;
    float overallAverageSum = 0.0;
    char continueChoice;

    do {
        char name[100], subjects[3][100];
        int grades[3], totalMarks = 0;
        float average;

        // Input name
        printf("\n===============================\n");
        printf("        STUDENT REPORT\n");
        printf("===============================\n");

        printf("ENTER STUDENT NAME: ");
        scanf("%s", name);

        // Input subjects and grades
        for (int i = 0; i < 3; i++) {
            printf("\nENTER NAME FOR SUBJECT %d: ", i + 1);
            scanf("%s", subjects[i]);

            printf("ENTER GRADE FOR %s (0-100): ", subjects[i]);
            do {
                scanf("%d", &grades[i]);
                if (grades[i] < 0 || grades[i] > 100) {
                    printf("INVALID GRADE. PLEASE ENTER A VALUE BETWEEN 0 AND 100: ");
                }
            } while (grades[i] < 0 || grades[i] > 100);
            totalMarks += grades[i];
        }

        // Calculate average
        average = totalMarks / 3.0;
        overallAverageSum += average;
        totalStudents++;

        // Display results
        printf("\n-------------------------------\n");
        printf("       STUDENT: %s\n", name);
        printf("-------------------------------\n");
        for (int i = 0; i < 3; i++) {
            printf("%-10s : %3d\n", subjects[i], grades[i]);
        }
        printf("-------------------------------\n");
        printf("TOTAL MARKS  : %d\n", totalMarks);
        printf("AVERAGE      : %.2f\n", average);
        printf("STATUS       : %s %s\n", (average >= 50) ? "✅" : "❌", (average >= 50) ? "PASS" : "FAIL");
        printf("===============================\n");

        // Add another student
        printf("\nADD ANOTHER STUDENT? (Y/N): ");
        scanf(" %c", &continueChoice);

    } while (continueChoice == 'Y' || continueChoice == 'y');

    // Display summary
    if (totalStudents > 0) {
        float overallAverage = overallAverageSum / totalStudents;
        printf("\n===============================\n");
        printf("           SUMMARY\n");
        printf("===============================\n");
        printf("TOTAL STUDENTS  : %d\n", totalStudents);
        printf("OVERALL AVERAGE : %.2f\n", overallAverage);
        printf("===============================\n");
    } else {
        printf("\nNO STUDENT DATA ENTERED.\n");
    }

    return 0;
}
