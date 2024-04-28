#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define SIGNAL_LENGTH 24
#define ERROR_PERCENTAGE 10

// Function prototypes
void add_noise(char signal[SIGNAL_LENGTH]);
void print_signal(char signal[SIGNAL_LENGTH]);
int detect_errors(char signal[SIGNAL_LENGTH]);
void correct_errors(char signal[SIGNAL_LENGTH]);

int main() {
    char clean_signal[3][8] = {
        "01010101",  // U
        "01000011",  // C
        "01010101"   // U
    };
    char received_signal[SIGNAL_LENGTH];
    
    // Copy clean signal to received signal
    strcpy(received_signal, clean_signal[0]);
    strcat(received_signal, clean_signal[1]);
    strcat(received_signal, clean_signal[2]);
    
    printf("Original signal:\n");
    print_signal(received_signal);
    
    // Add noise to the signal
    add_noise(received_signal);
    
    printf("\nSignal with noise:\n");
    print_signal(received_signal);
    
    // Detect and correct errors
    if (detect_errors(received_signal)) {
        printf("\nErrors detected and corrected:\n");
        correct_errors(received_signal);
        print_signal(received_signal);
    } else {
        printf("\nNo errors detected.\n");
    }
    
    return 0;
}

// Function to add noise to the signal
void add_noise(char signal[SIGNAL_LENGTH]) {
    srand(time(NULL));
    for (int i = 0; i < SIGNAL_LENGTH; i++) {
        if (rand() % 100 < ERROR_PERCENTAGE) {
            signal[i] = (signal[i] == '0') ? '1' : '0';  // Flip the bit
        }
    }
}

// Function to print the signal
void print_signal(char signal[SIGNAL_LENGTH]) {
    for (int i = 0; i < SIGNAL_LENGTH; i++) {
        printf("%c", signal[i]);
        if ((i + 1) % 8 == 0) {
            printf(" ");  // Add space after each byte
        }
    }
    printf("\n");
}

// Function to detect errors in the signal
int detect_errors(char signal[SIGNAL_LENGTH]) {
    // Simple parity check
    int error_count = 0;
    for (int i = 0; i < SIGNAL_LENGTH; i++) {
        if (signal[i] == '1') {
            error_count++;
        }
    }
    return (error_count % 2 != 0);  // If error count is odd, return 1 indicating errors
}

// Function to correct errors in the signal
void correct_errors(char signal[SIGNAL_LENGTH]) {
    // As this is an example, let's just flip the first detected error
    for (int i = 0; i < SIGNAL_LENGTH; i++) {
        if (signal[i] == '1') {
            signal[i] = '0';
            break;
        }
    }
}
