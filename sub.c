// #include <stdio.h>
// #include <ctype.h>

// int main() {
//     char input;

//     printf("Enter a character: ");
//     scanf(" %c", &input);

//     // Check if input is a digit
//     if (isdigit(input)) {
//         int number = input - '0'; // Convert char to integer

//         // Check if the number is even or odd
//         if (number % 2 == 0) {
//             printf("The input is a number and it is even.\n");
//         } else {
//             printf("The input is a number and it is odd.\n");
//         }
//     } 
//     // Check if input is an alphabetic character
//     else if (isalpha(input)) {
//         printf("The input is a character.\n");
//     } 
//     else {
//         printf("The input is neither a number nor an alphabetic character.\n");
//     }

      
// }
#include <stdio.h>
#include <ctype.h>

int main() {
    char input[10];

    // Input a value as a string
    printf("Enter a number: ");
    scanf("%s", input);

    // Check if the input is a valid integer
    int i = 0;
    int isNumber = 1;

    // Check each character to ensure it's a digit (or a negative sign for the first character)
    if (input[0] == '-' || isdigit(input[0])) {
        i = 1;
    } else {
        isNumber = 0;
    }

    for (; input[i] != '\0'; i++) {
        if (!isdigit(input[i])) {
            isNumber = 0;
            break;
        }
    }

    if (isNumber) {
        // Convert string to integer and check if it's even or odd
        int number = atoi(input);
        if (number % 2 == 0) {
            printf("The number is even.\n");
        } else {
            printf("The number is odd.\n");
        }
    } else {
        printf("The input is not a valid number.\n");
    }

    return 0;
}