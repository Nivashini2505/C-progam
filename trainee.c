#include <stdio.h>

#define NUM_TRAINEES 3
#define NUM_ROUNDS 3

void recordOxygenLevel(int trainee, int round, int oxygenLevels[NUM_TRAINEES][NUM_ROUNDS]) {
    int oxygen;
    do {
        printf("Enter oxygen level for Trainee %d, Round %d: ", trainee, round);
        scanf("%d", &oxygen);
    } while (oxygen < 1 || oxygen > 100);
    oxygenLevels[trainee - 1][round - 1] = oxygen;
}

void calculateAverageOxygenLevel(int oxygenLevels[NUM_TRAINEES][NUM_ROUNDS], int averageOxygenLevels[NUM_TRAINEES]) {
    for (int trainee = 0; trainee < NUM_TRAINEES; trainee++) {
        int sum = 0;
        for (int round = 0; round < NUM_ROUNDS; round++) {
            sum += oxygenLevels[trainee][round];
        }
        averageOxygenLevels[trainee] = sum / NUM_ROUNDS;
    }
}

void displayMostFitTrainees(int averageOxygenLevels[NUM_TRAINEES]) {
    int highestAverage = 0;
    for (int trainee = 0; trainee < NUM_TRAINEES; trainee++) {
        if (averageOxygenLevels[trainee] > highestAverage) {
            highestAverage = averageOxygenLevels[trainee];
        }
    }
    printf("Most Fit Trainee(s):\n");
    for (int trainee = 0; trainee < NUM_TRAINEES; trainee++) {
        if (averageOxygenLevels[trainee] == highestAverage) {
            printf("Trainee %d\n", trainee + 1);
        }
    }
    printf("Highest Average Oxygen Level: %d\n", highestAverage);
}

int main() {
    int oxygenLevels[NUM_TRAINEES][NUM_ROUNDS];
    int averageOxygenLevels[NUM_TRAINEES];

    for (int trainee = 1; trainee <= NUM_TRAINEES; trainee++) {
        for (int round = 1; round <= NUM_ROUNDS; round++) {
            recordOxygenLevel(trainee, round, oxygenLevels);
        }
    }

    calculateAverageOxygenLevel(oxygenLevels, averageOxygenLevels);

    displayMostFitTrainees(averageOxygenLevels);

    return 0;
}