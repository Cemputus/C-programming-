#include <stdio.h>

int main() {
    int correct_answers = 0, attempts = 0;
    char operation;
    
    do {
        int num1, num2, answer, user_answer;
        
        // Generate random numbers between 0 and 9
        num1 = rand() % 10;
        num2 = rand() % 10;

        printf("Enter the answer of the expression %d %c %d: ", num1, operation, num2);
        scanf("%d", &user_answer);

        switch (operation) {
            case '+':
                answer = num1 + num2;
                break;
            case '-':
                answer = num1 - num2;
                break;
            case '*':
                answer = num1 * num2;
                break;
            case '/':
                answer = num1 / num2;
                break;
            default:
                printf("Invalid operation!\n");
                continue;
        }
        
        if (user_answer == answer) {
            printf("Correct!\n");
            correct_answers++;
        } else {
            printf("Incorrect!\n");
        }
        
        attempts++;
    } while (correct_answers < 10);

    printf("\nMath exercise completed!\n");
    printf("Total expressions done: %d\n", attempts);
    printf("Total passed: %d\n", correct_answers);
    printf("Total failed: %d\n", attempts - correct_answers);

    return 0;
}
