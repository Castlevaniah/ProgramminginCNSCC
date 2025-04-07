/*
 * ===========================================================
 * Name    : Aaron Hirtle
 * Date    : 4/7/2025
 * Course  : Programming in C
 * Assignment #2
 * ===========================================================
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 
 #define FLOORS 5
 #define ROOMS 10
 #define NAME_LEN 50
 
 char* hotel[FLOORS][ROOMS] = {NULL};
 
 // View all rooms and their booking status
 void viewRooms() {
     for (int i = 0; i < FLOORS; i++) {
         printf("Floor %d: ", i + 1);
         for (int j = 0; j < ROOMS; j++) {
             if (hotel[i][j] == NULL)
                 printf("0 "); // Available
             else
                 printf("1 "); // Booked
         }
         printf("\n");
     }
 }
 
 // Book a room
 void bookRoom() {
     int floor, room;
     char name[NAME_LEN];
 
     printf("Enter floor (1-5): ");
     scanf("%d", &floor);
     printf("Enter room number (1-10): ");
     scanf("%d", &room);
 
     if (floor < 1 || floor > 5 || room < 1 || room > 10) {
         printf("Invalid floor or room number.\n");
         return;
     }
 
     if (hotel[floor - 1][room - 1] != NULL) {
         printf("Room already booked by %s.\n", hotel[floor - 1][room - 1]);
         return;
     }
 
     printf("Enter guest name: ");
     scanf(" %[^\n]", name); // Read full name with spaces
 
     // Allocate memory for the name
     hotel[floor - 1][room - 1] = malloc(strlen(name) + 1);
     if (hotel[floor - 1][room - 1] != NULL) {
         strcpy(hotel[floor - 1][room - 1], name);
         printf("Room booked successfully, %s!\n", hotel[floor - 1][room - 1]);
     } else {
         printf("Memory allocation failed.\n");
     }
 } 
 
 // Cancel a booking
 void cancelBooking() {
     int floor, room;
 
     printf("Enter floor (1-5): ");
     scanf("%d", &floor);
     printf("Enter room number (1-10): ");
     scanf("%d", &room);
 
     if (floor < 1 || floor > 5 || room < 1 || room > 10) {
         printf("Invalid floor or room number.\n");
         return;
     }
 
     if (hotel[floor - 1][room - 1] == NULL) {
         printf("Room is already available.\n");
     } else {
         free(hotel[floor - 1][room - 1]); // Free memory
         hotel[floor - 1][room - 1] = NULL;
         printf("Booking canceled.\n");
     }
 }
 
 // Free all allocated memory
 void cleanup() {
     for (int i = 0; i < FLOORS; i++) {
         for (int j = 0; j < ROOMS; j++) {
             if (hotel[i][j] != NULL) {
                 free(hotel[i][j]);
                 hotel[i][j] = NULL;
             }
         }
     }
 }
 
 int main() {
     int choice;
 
     while (1) {
         printf("\n*-**-* Hotel Reservation System *-**-*\n");
         printf("1. View available rooms\n");
         printf("2. Book a room\n");
         printf("3. Cancel a booking\n");
         printf("4. Exit\n");
         printf("Select an option: ");
         scanf("%d", &choice);
 
         switch (choice) {
             case 1:
                 viewRooms();
                 break;
             case 2:
                 bookRoom();
                 break;
             case 3:
                 cancelBooking();
                 break;
             case 4:
                 cleanup();
                 printf("Have a great day!\n");
                 return 0;
             default:
                 printf("Invalid option. Try again.\n");
         }
     }
 
     return 0;
 }
 