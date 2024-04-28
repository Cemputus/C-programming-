#include <stdio.h>

int main() {
    int initial_population, days;
    float daily_increase;

    // Input validation
    do {
        printf("Enter the initial population of red ants (must be >= 2): ");
        scanf("%d", &initial_population);
    } while (initial_population < 2);

    do {
        printf("Enter the average daily population increase as a percentage (must be >= 0): ");
        scanf("%f", &daily_increase);
    } while (daily_increase < 0);

    do {
        printf("Enter the number of days the population will multiply (must be >= 1): ");
        scanf("%d", &days);
    } while (days < 1);

    float population = initial_population;
    float total_increase = 0;

    printf("\nDay\tPopulation\n");
    printf("----------------\n");

    // Calculate population for each day
    int i = 1;
    while (i <= days) {
        printf("%d\t%.2f\n", i, population);
        float increase = population * (daily_increase / 100);
        population += increase;
        total_increase += increase;
        i++;
    }

    printf("\nTotal population growth over %d days: %.2f\n", days, population - initial_population);
    printf("Average daily population increase: %.2f\n", total_increase / days);

    return 0;
}
