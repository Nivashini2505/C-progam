#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int pnr_number;
    int ticket_number;
    char gender;
    int age;
} Passenger;

void Female_passengers(Passenger* passengers, int num_passengers) {
    printf("Female Passengers:\n");
    for (int i = 0; i < num_passengers; i++) {
        if (passengers[i].gender == 'F') {
            printf("Name: %s\n", passengers[i].name);
            printf("PNR Number: %d\n", passengers[i].pnr_number);
            printf("Ticket Number: %d\n", passengers[i].ticket_number);
            printf("Gender: %c\n", passengers[i].gender);
            printf("Age: %d\n", passengers[i].age);
            printf("\n");
        }
    }
}

void Senior_citizen(Passenger* passengers, int num_passengers) {
    printf("Senior Citizens:\n");
    for (int i = 0; i < num_passengers; i++) {
        if (passengers[i].age > 60) {
            printf("Name: %s\n", passengers[i].name);
            printf("PNR Number: %d\n", passengers[i].pnr_number);
            printf("Ticket Number: %d\n", passengers[i].ticket_number);
            printf("Gender: %c\n", passengers[i].gender);
            printf("Age: %d\n", passengers[i].age);
            printf("\n");
        }
    }
}

int main() {
    int num_passengers;
    printf("Enter the number of passengers: ");
    scanf("%d", &num_passengers);

    Passenger* passengers = (Passenger*)malloc(num_passengers * sizeof(Passenger));
    if (passengers == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 1; i <= num_passengers; i++) {
        printf("Enter details for passenger %d:\n", i );
        printf("Name: ");
        scanf("%s", passengers[i].name);
        printf("PNR Number: ");
        scanf("%d", &passengers[i].pnr_number);
        printf("Ticket Number: ");
        scanf("%d", &passengers[i].ticket_number);
        printf("Gender: ");
        scanf(" %c", &passengers[i].gender);
        printf("Age: ");
        scanf("%d", &passengers[i].age);
        printf("\n");
    }

    Female_passengers(passengers, num_passengers);
    Senior_citizen(passengers, num_passengers);

    free(passengers);

    return 0;
}