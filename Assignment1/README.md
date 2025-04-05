# Programming in C - Assignment 1

## Description

This program is part of **Assignment 1** for the **Programming in C** course. It is designed to accept and process student data, including their name, grades for three subjects, and compute the average score. It then displays individual student results, including their pass/fail status, and shows a summary of all students' performance.

## Features
- Input a student's name and grades for 3 subjects.
- Calculate the total marks and average for each student.
- Display the pass/fail status based on the average score.
- Allow entry of multiple students and provide a summary of all students.
- Handles invalid grade inputs (grades must be between 0 and 100).

## Program Flow

1. The program prompts for the student's name.
2. The program requests the names of 3 subjects and their corresponding grades.
3. The grades are validated to ensure they are within the range of 0 to 100.
4. The average grade for each student is calculated, and their results are displayed.
5. The program asks if you want to add another student.
6. Once all students have been entered, a summary of the total number of students and the overall average is displayed.

## Example Output

```
===============================
        STUDENT REPORT
===============================
ENTER STUDENT NAME: John

ENTER NAME FOR SUBJECT 1: Math
ENTER GRADE FOR Math (0-100): 85

ENTER NAME FOR SUBJECT 2: Science
ENTER GRADE FOR Science (0-100): 92

ENTER NAME FOR SUBJECT 3: History
ENTER GRADE FOR History (0-100): 78

-------------------------------
       STUDENT: John
-------------------------------
Math       :  85
Science    :  92
History    :  78
-------------------------------
TOTAL MARKS  : 255
AVERAGE      : 85.00
STATUS       : ✅ PASS
===============================

ADD ANOTHER STUDENT? (Y/N): N

===============================
           SUMMARY
===============================
TOTAL STUDENTS  : 1
OVERALL AVERAGE : 85.00
===============================
```

## How to Run

1. Copy the C program code to a file named `student_report.c`.
2. Compile the code using a C compiler:
   ```bash
   gcc student_report.c -o student_report
   ```
3. Run the program:
   ```bash
   ./student_report
   ```

## Author
- **Name**: Aaron Hirtle
- **Date**: 2025-02-19
- **Course**: Programming in C
```
