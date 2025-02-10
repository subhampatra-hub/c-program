// #include<stdio.h>
// void dowork(int a ,int b,int *sum,int *pro,int *avarage);
// int main(){
//     int a;
//     int b;
//     printf("enter the value of a =");
//     scanf("%d",&a);
//     printf("Enter the value of b=");
//     scanf("%d",&b);
//     int sum,pro,avarage;
//     dowork(a,b,&sum,&pro,&avarage);
//     printf("the sum of a and b is :%d\n",sum);
//     printf("the sum of a and b is :%d\n",pro);
//     printf("the sum of a and b is :%d\n",avarage);
//     return 0;
// }
// void dowork(int a ,int b,int *sum,int *pro,int *avarage){
//     *sum=a+b;
//     *pro=a*b;
//     *avarage=(a+b)/2;

// }





// #include<stdio.h>
// void swap(int a,int b);
// void _swap(int *a,int *b);
// int main(){
//     int x=3;
//     int y=5;
//     _swap(&x,&y);
//     printf("x=%d and y is =%d\n",x,y);


//     return 0;
// }
// void swap(int a ,int b){
//     int t=a;
//     a=b;
//     b=t;
//     printf("a=%d & b=%d ",a,b);

// }
// void _swap(int *a,int *b){
//     int t=*a;
//     *a=*b;
//     *b=t;
// }




// #include<stdio.h>
// int main(){
//     int a=23;
//     int *ptr=&a;
//     printf("the address of the variable is %p ",&a);
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int arr[]={12,23,34,44};
//     int n=sizeof(arr[0]);
//     int *ptr=arr;
//     int max=*ptr;
//     while(ptr<arr+n){
//         if(*ptr>max){
//             max=*ptr;
//         }
//         ptr++;
//     }

//     printf("the largest number is :%d\n",max);


//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int arr[] = {12, 45, 7, 89, 34}; // Example array
//     int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
//     int *ptr = arr; // Pointer to the first element of the array
//     int max = *ptr; // Initialize max with the first element

//     // Iterate through the array using the pointer
//     for (int i = 1; i < n; i++) {
//         if (*(ptr + i) > max) { // Access array elements using pointer arithmetic
//             max = *(ptr + i);  // Update max if a larger element is found
//         }
//     }

//     printf("The largest element in the array is: %d\n", max);
//     return 0;
// }
