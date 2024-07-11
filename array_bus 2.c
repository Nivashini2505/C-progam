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

    int dayPassengers[DAYS] = {0}; // Array to hold the sum of passengers for each day

    // Sum passengers for each day across all routes
    for(int i = 0; i < DAYS; i++) {
        for(int j = 0; j < ROUTES; j++) {
            dayPassengers[i] += bus[j][i];
        }
    }

    // Find the day with the maximum number of passengers
    int maxPassengers = dayPassengers[0];
    int maxDayIndex = 0;
    for(int i = 1; i < DAYS; i++) {
        if(dayPassengers[i] > maxPassengers) {
            maxPassengers = dayPassengers[i];
            maxDayIndex = i;
        }
    }

    printf("The day with the maximum passengers is %s with %d passengers.\n", days[maxDayIndex], maxPassengers);

    return 0;
}