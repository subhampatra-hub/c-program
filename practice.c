// //prime or not 
// //#include<stdio.h>
// // int main(){
// //     int a,i;
// //     int count=0;
// //     printf("enter any number :");
// //     scanf("%d",&a);
// //     for(i=1;i<=a;i++){
// //         if(a%i ==0){
// //             count++;
// //         }
// //     }
// //     if(count==2){
// //         printf("it is a prime number");
// //     }
// //     else{
// //         printf("it is not a prime number");
// //     }

// //     return 0;
// // }





// //pallindrome number
// // #include<stdio.h>
// // int main(){
// //     int n,c,r,s=0;
// //     printf("Enter any number :");
// //     scanf("%d",&n);
// //     c=n;
// //     while(n>0){
// //         r=n%10;
// //         s=r+(s*10);
// //         n=n/10;
// //     }
// //     if(c==s){
// //         printf("it is a pallindrome number.");
// //     }
// //     else{
// //         printf("it is not a pallindrome number.");
// //     }
    
// //     return 0;
// // }



// // #include <stdio.h>

// // int main() {
// //     int number, sum = 0, digit;

// //     // Taking input from the user
// //     printf("Enter a number: ");
// //     scanf("%d", &number);

// //     // Loop to extract digits and calculate the sum
// //     while (number != 0) {
// //         digit = number % 10;  // Extract the last digit
// //         sum += digit;         // Add the digit to sum
// //         number /= 10;         // Remove the last digit from the number
// //     }

// //     // Output the result
// //     printf("Sum of digits: %d\n", sum);

// //     return 0;
// // }




// // #include<stdio.h>
// // int gcdt(int a ,int b){
// //     while(b!=0)
// //     {
// //         int temp=b;
// //         b=a%b;
// //         a=temp;
// //     }
// //     return a;
// // }
// // int main(){
// //         int n1,n2;
// //         printf("Enter two number :");
// //         scanf("%d %d",&n1,&n2);
// //         int gcd=gcdt(n1,n2);
// //         printf("the gcd of%d and %d is :%d",n1,n2,gcd);
// //     return 0;
// // }




// // #include <stdio.h>

// // // Function to calculate GCD using Euclidean algorithm
// // int findGCD(int a, int b) {
// //     while (b != 0) {
// //         int temp = b;
// //         b = a % b;
// //         a = temp;
// //     }
// //     return a;
// // }

// // int main() {
// //     int num1, num2;

// //     // Input two numbers from the user
// //     printf("Enter two integers: ");
// //     scanf("%d %d", &num1, &num2);

// //     // Find and display the GCD
// //     int gcd = findGCD(num1, num2);
// //     printf("GCD of %d and %d is %d\n", num1, num2, gcd);

// //     return 0;
// // }

    
    
// // #include <stdio.h>

// // int main() {
// //     int n, first = 0, second = 1, next;

// //     // Input the number of terms from the user
// //     printf("Enter the number of Fibonacci terms: ");
// //     scanf("%d", &n);

// //     // Check for valid input
// //     if (n <= 0) {
// //         printf("Please enter a positive integer.\n");
// //         return 1;
// //     }

// //     printf("The first %d Fibonacci numbers are:\n", n);

// //     for (int i = 1; i <= n; i++) {
// //         if (i == 1) {
// //             next = first;
// //         } else if (i == 2) {
// //             next = second;
// //         } else {
// //             next = first + second;
// //             first = second;
// //             second = next;
// //         }
// //         printf("%d ", next);
// //     }

// //     printf("\n");
// //     return 0;
// // }




// // #include <stdio.h>

// // int main() {
// //     int matrix[2][2];
// //     int determinant;

// //     // Input elements of the 2x2 matrix
// //     printf("Enter the elements of the 2x2 matrix (row by row):\n");
// //     for (int i = 0; i < 2; i++) {
// //         for (int j = 0; j < 2; j++) {
// //             printf("Element [%d][%d]: ", i + 1, j + 1);
// //             scanf("%d", &matrix[i][j]);
// //         }
// //     }

// //     // Calculate determinant: det(A) = ad - bc
// //     determinant = (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);

// //     // Display the matrix
// //     printf("\nThe matrix is:\n");
// //     for (int i = 0; i < 2; i++) {
// //         for (int j = 0; j < 2; j++) {
// //             printf("%d ", matrix[i][j]);
// //         }
// //         printf("\n");
// //     }

// //     // Display the determinant
// //     printf("\nThe determinant of the matrix is: %d\n", determinant);

// //     return 0;
// // }



#include<stdio.h>
#include<string.h>
int main(){
    char str1[]="cutm";
    char str2[]="CUTM";
    int res=strcmp(str1,str2);
    if(res==0)
    printf("Strings are equal");
    else
    printf("Strings are unequal ");
    printf("\nValue returned by strcmp() is :%d",res);
    return 0;
    
}



// #include<stdio.h>
// int main(){
//     int num=10;
//     num=(num<<2);
//     printf("\nAfter shifting the binary bits to the left side.");
//     printf("\nThe new value of the variable num=%d",num);
//     return 0;
// }