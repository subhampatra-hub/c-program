// // #include<stdio.h>
// // int main(){

// //     int marks[3];
// //     printf("phy mark :");
// //     scanf("%d",&marks[0]);


// //     printf("chem mark :");
// //     scanf("%d",&marks[1]);

// //     printf("bio mark :");
// //     scanf("%d",&marks[2]);



// //     printf("phy mark=%d,chem amrk =%d,bio marks =%d",marks[0],marks[1],marks[2]);



    
// //     return 0;
// // }






// // #include<stdio.h>
// // int main(){
// //     float item[3];

// //     printf("milk=");
// //     scanf("%f",&item[0]);

// //     printf("soda=");
// //     scanf("%f",&item[1]);


// //     printf("sugar=");
// //     scanf("%f",&item[2]);




// //     printf("final price of milk is=%f\n",item[0]+(0.18*item[0]));
// //     printf("final price of soda is =%f\n",item[1]+(0.20*item[1]));
// //     printf("the final price of sugar is =%f\n",item[2]+(0.45*item[2]));





// //     return 0;
// // }







// // #include<stdio.h>
// // int main(){
// //     int mark[]={1,2,3,4};
// //     printf(" %d\n  %d\n   %d\n    %d\n",mark[0],mark[1],mark[2],mark[3]);
    
// //     return 0;
// // }


// // #include<stdio.h>
// // int main(){
// //     int marks[3]={98,65,32};
// //     printf("marks of pysics is:%d\n",marks[0]);
// //     printf("mark of chemistry is :%d\n",marks[2]);
// //     printf("marks of bio is:%d\n",marks[1]);
// //     return 0;
// // }




// // #include<stdio.h>
// // int oddnumber(int arr[],int n);
// // int main(){
// //     int arr[]={1,2,3,4,5,6};
// //     printf("%d",oddnumber(arr,6));

// //     return 0;
// // }
// // int oddnumber(int arr[],int n){
// //     int count =0;
// //     for(int i=0;i<n;i++){
// //         if(arr[i]%2 !=0){
// //             count++;

// //         }
// //     }
// //     return count;
// // }





// // #include<stdio.h>
// // //reverse an array
// // void revarr(int arr[],int n);
// // void arrr(int arr[],int n);
// // int main(){
// //     int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13};
// //     revarr(arr,13);
// //     arrr(arr,13);
    


// //     return 0;
// // }
// // void arrr(int arr[],int n){
// //     for(int i=0;i<13;i++){
// //         printf("%d\t",arr[i]);
// //     // }
    
// // }
// // void revarr(int arr[],int n){
// //     for(int i=0;i<n/2;i++){
// //         int first=arr[i];
// //         int second=arr[n-1-i];
// //         arr[i]=second;
// //         arr[n-1-i]=first;
        
// //     }
    
// // }





// //print first n fibonacci number
// // #include<stdio.h>
// // int main(){
// //     int n,i;
// //     printf("Enter a number(n>2) :");
// //     scanf("%d",&n);
// //     int fib[n];
// //     fib[0]=0;
// //     fib[1]=1;
// //     for(i=2;i<n;i++){
// //         fib[i]=fib[i-1]+fib[i-2];
// //         printf("%d\t",fib[i]);
// //     }
// //     printf("\n");
// //     return 0;
// // }




// //2 and 3 table
// // #include<stdio.h>
// // void ttable(int arr[][10][10],int n,int m,int number);

// // int main(){
// //     int arr[2][10][10];
// //     ttable(arr,0,10,2);
// //     ttable(arr,1,10,3);
// //     ttable(arr,2,10,4);


// //     for(int i=0;i<10;i++){
// //         printf("%d\t",arr[0][i]);
// //         }
// //         printf("\n");
// //      for(int i=0;i<10;i++){
// //         printf("%d\t",arr[1][i]);
// //         }
// //      for(int i=0;i<10;i++){
// //         printf("%d\t",arr[2][i]);
// //         }
// //     return 0;
// // }
// // void ttable(int arr[][10][10],int n,int m,int number){
// //     for(int i=0;i<m;i++){
// //         arr[n][i]=number*(i+1);
// //         }
        
// //     }





// // #include<stdio.h>
// // int main(){
// //     int arr[]={1,2,3,4,5,6};
// //     while{

// //     }
// //     return 0;
// // }



// // #include <stdio.h>

// // void findSmallestAndLargest(int arr[], int size, int *smallest, int *largest) {
// //     if (size <= 0) {
// //         return; // Handle empty array case
// //     }

// //     *smallest = arr[0];
// //     *largest = arr[0];

// //     for (int i = 1; i < size; i++) {
// //         if (arr[i] < *smallest) {
// //             *smallest = arr[i];
// //         }
// //         if (arr[i] > *largest) {
// //             *largest = arr[i];
// //         }
// //     }
// // }

// // int main() {
// //     int arr[] = {3, 5, 1, 8, -2, 7, 20};
// //     int size = sizeof(arr) / sizeof(arr[0]);
// //     int smallest, largest;

// //     findSmallestAndLargest(arr, size, &smallest, &largest);

// //     printf("Smallest element: %d\n", smallest);
// //     printf("Largest element: %d\n", largest);

// //     return 0;
// // }



// // #include<stdio.h>
// // int main(){
// //     int arr[]={1,2,3,4,5,6};
// //     int size=sizeof(arr);
// //     int smallest,largest;


// //     if(size == 0){
// //         printf("the array is empty\n");
// //         return 0;
// //     }
// //     smallest=largest=arr[0];
// //     for(int i=1;i<size;i++){
// //         if(arr[i]<smallest){
// //             smallest=arr[i];
// //         }
// //         if(arr[i]>largest){
// //         largest=arr[i];
// //     }
// //     }
   
// //     printf("smallest element is :%d\n",smallest);
// //     printf("largest element is :%d\n",largest);

    
// // }



// #include <stdio.h>

// int main() {
//     int arr[] = {12, 5, 7, 3, 19, -8, 21, 4};
//     int size = sizeof(arr) / sizeof(arr[0]);  // Calculate the number of elements in the array
//     int smallest, largest;

//     if (size == 0) {
//         printf("The array is empty.\n");
//         return 0;
//     }

//     // Initialize smallest and largest with the first element
//     smallest = largest = arr[0];

//     // Traverse the array to find the smallest and largest elements
//     for (int i = 1; i < size; i++) {
//         if (arr[i] < smallest) {
//             smallest = arr[i];
//         }
//         if (arr[i] > largest) {
//             largest = arr[i];
//         }
//     }

//     printf("Smallest element: %d\n", smallest);
//     printf("Largest element: %d\n", largest);

//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int size,i,max;
//     int arr;
//     printf("enter  size of an array :");
//     scanf("%d",&size);
//     for(i=0;i<size;i++){
//         scanf("%d",&arr[i]);
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     char a[50];
//     float b;
//     int c;
   
    
//     printf("enter your name :");
//     scanf("%s",a);
//     printf("enter your marks:");
//     scanf("%f",&b);
//     printf("enter your age :");
//     scanf("%d",&c);
    
//     printf("name is :%s\n",a);
//     printf("marks is: %.2f\n",b);
//     printf("age is: %d",c);


//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int n;
    
//     printf("Enter the size of an array :");
//     scanf("%d",&n);

//     if(n<=0){
//         printf("invalid array size");
//         return 1;
//     }


//     int arr[n];
//     printf("Enter %d  elements of an array:");
//     for( int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int max=arr[0];
//     for( int i=0;i<n;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
        
//     }
//     printf("The maximum element of an array is : %d",max);

//     return 0;
// }











