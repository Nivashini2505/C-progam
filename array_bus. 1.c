#include <stdio.h>

#define ROUTES 5
#define DAYS 5

int main() {
    // Initialize the array with given data for all routes
    int bus[ROUTES][DAYS] = {
        {0, 12, 9, 7, 5},  // R1
        {6, 4, 0, 3, 9},   // R2
        {11, 15, 3, 0, 7}, // R3
        {5, 0, 8, 10, 13}, // R4
        {12, 4, 6, 13, 0}  // R5
    };

    // Names of the days for display purposes
    char* days[DAYS] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

    // Iterate through each route to find the day with the maximum number of passengers
    for(int i = 0; i < ROUTES; i++) {
        int maxPassengers = bus[i][0];
        int maxDayIndex = 0;
        for(int j = 1; j < DAYS; j++) {
            if(bus[i][j] > maxPassengers) {
                maxPassengers = bus[i][j];
                maxDayIndex = j;
            }
        }
        printf("Route %d had the maximum passengers, %d, on %s.\n", i + 1, maxPassengers, days[maxDayIndex]);
    }

    return 0;
}