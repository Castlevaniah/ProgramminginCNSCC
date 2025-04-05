/*
 * ===========================================================
 * Name    : Aaron Hirtle
 * Date    : 4/5/2025
 * Course  : Programming in C
 * Exercise: #5 Task 2
 * ===========================================================
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAMES 5
#define MAX_NAME_LENGTH 50

int compareNames(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    char names[MAX_NAMES][MAX_NAME_LENGTH];
    char *namePtrs[MAX_NAMES];

    printf("ENTER %d NAMES:\n", MAX_NAMES);
    for (int i = 0; i < MAX_NAMES; i++) {
        printf("NAME %d: ", i + 1);
        fgets(names[i], MAX_NAME_LENGTH, stdin);
        names[i][strcspn(names[i], "\n")] = 0;
        namePtrs[i] = names[i];
    }

    qsort(namePtrs, MAX_NAMES, sizeof(char *), compareNames);

    printf("\nSORTED NAMES:\n");
    for (int i = 0; i < MAX_NAMES; i++) {
        printf("%s\n", namePtrs[i]);
    }

    return 0;
}