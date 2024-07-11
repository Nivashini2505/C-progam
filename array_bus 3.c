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

    // Iterate through each route
    for(int i = 0; i < ROUTES; i++) {
        printf("Route %d had no passengers on: ", i + 1);
        int noTravelDays = 0; // Counter to check if there were any days with no passengers
        for(int j = 0; j < DAYS; j++) {
            if(bus[i][j] == 0) {
                printf("%s ", days[j]);
                noTravelDays++;
            }
        }
        if(noTravelDays == 0) {
            printf("None");
        }
        printf("\n");
    }

    return 0;
}