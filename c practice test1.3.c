//rs.700 equal no of 25paise,50 paise,1 rupee how many of each type?
#include <stdio.h>

int main() {
    // Define variables
    int total_rupees = 700;
    float value_per_set_of_coins = 1.75; // 0.25 + 0.50 + 1.00 = 1.75 rupees per set of 3 coins
    int number_of_sets;
    
    // Calculate the number of sets of coins
    number_of_sets = total_rupees / value_per_set_of_coins;

 

    // Print the result
    printf("Total number of coins: %d\n", number_of_sets);

    return 0;
}
