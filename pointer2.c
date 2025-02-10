// #include <stdio.h>
// void swap(int *a, int *b) {
//     int temp;
//     temp = *a; 
//     *a = *b;
//     *b = temp; 
// }

// int main() {
//     int num1, num2;

//     printf("Enter the first number: ");
//     scanf("%d", &num1);
//     printf("Enter the second number: ");
//     scanf("%d", &num2);

//     printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

//     // Call the swap function
//     swap(&num1, &num2);

//     printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

//     return 0;
// }
#include <stdio.h>

// Function to calculate string length using pointer
int string_length(const char *str) {
    const char *ptr = str;  // Pointer to the start of the string
    int length = 0;

    // Iterate through the string until the null terminator is found
    while (*ptr != '\0') {
        length++;      // Increment length for each character
        ptr++;         // Move pointer to the next character
    }

    return length;
}

int main() {
    const char *myString = "Hello, World!";
    int len = string_length(myString);
    printf("The length of the string is: %d\n", len);
    return 0;
}
