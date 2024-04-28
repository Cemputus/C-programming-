#include <stdio.h>

#define MAX_RESISTORS 10
#define MIN_RESISTANCE 1
#define MAX_RESISTANCE 10000

float calculate_series_resistance(float resistors[], int n);
float calculate_parallel_resistance(float resistors[], int n);

int main() {
    int choice, n;
    float resistors[MAX_RESISTORS];

    printf("Choose the connection type:\n");
    printf("1. Series\n");
    printf("2. Parallel\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the number of resistors: ");
            scanf("%d", &n);
            
            // Input validation for resistor values
            for (int i = 0; i < n; i++) {
                do {
                    printf("Enter the resistance of resistor %d (ohms): ", i + 1);
                    scanf("%f", &resistors[i]);
                } while (resistors[i] < MIN_RESISTANCE || resistors[i] > MAX_RESISTANCE);
            }

            printf("Total resistance in ohms (Ω): %.2f\n", calculate_series_resistance(resistors, n));
            printf("Total resistance in kilo-ohms (kΩ): %.2f\n", calculate_series_resistance(resistors, n) / 1000);
            break;

        case 2:
            printf("Enter the number of resistors: ");
            scanf("%d", &n);
            
            // Input validation for resistor values
            for (int i = 0; i < n; i++) {
                do {
                    printf("Enter the resistance of resistor %d (ohms): ", i + 1);
                    scanf("%f", &resistors[i]);
                } while (resistors[i] < MIN_RESISTANCE || resistors[i] > MAX_RESISTANCE);
            }

            printf("Total resistance in ohms (Ω): %.2f\n", calculate_parallel_resistance(resistors, n));
            printf("Total resistance in kilo-ohms (kΩ): %.2f\n", calculate_parallel_resistance(resistors, n) / 1000);
            break;

        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}

float calculate_series_resistance(float resistors[], int n) {
    float total_resistance = 0;
    for (int i = 0; i < n; i++) {
        total_resistance += resistors[i];
    }
    return total_resistance;
}

float calculate_parallel_resistance(float resistors[], int n) {
    float total_inverse_resistance = 0;
    for (int i = 0; i < n; i++) {
        total_inverse_resistance += 1 / resistors[i];
    }
    return 1 / total_inverse_resistance;
}
