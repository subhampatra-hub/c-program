// #include<stdio.h>
// //function prototype 
// void printHello();
// int main(){
//     printHello();//function call
//     printHello();

//     return 0;
// }
// //functio definetion
// void printHello(){
//     printf("Hello world\n");
//     printf("my name is subham\n");
// }




// #include<stdio.h>
// void hello();
// void goodbye();
// int main(){
//     hello();
//     goodbye();
//     return 0;
// }
// void hello(){
//     printf("hello\n");
// }
// void goodbye(){
//     printf("goodbye\n");
// }





// #include<stdio.h>
// void INDIAN();
// void FRANCH();
// int main(){
//     char ch;
//     printf("enter your citizency :(i/f)\n");

//     scanf("%s",&ch);
//     if(ch=='i'){
//         INDIAN();
//     }
//     else if(ch=='f'){
//         FRANCH();

//     }
//     else{
//         printf("ENTERED CITIZENCY IS WRPNG.. please enter valid citigency within i and f\n");
//     }
  
//     return 0;
// }
// void INDIAN(){
//     printf("NAMASTE\n");
// }
// void FRANCH(){
//     printf("Bonjour\n");
// }





// #include<stdio.h>
// void price(float value);
// int main(){
//     float a;
//     printf("enter a number :\n");
//     scanf("%f",&a);
//     price(a);


//     return 0;

// }
// void price(float value){
//     value=value+(0.18 * value);
//     printf("the actual price is :%f",value);
// }




// #include<stdio.h>
// #include<math.h>

// int main(){
//     int n;
//     printf("Enter a number :\n");
//     scanf("%d",&n);
   
//     printf("The square of the number is :%f",pow(n,2));

//     return 0;
// }





// #include<stdio.h>
// float area_of_a_square(float side);
// float area_of_a_circle(float rad);
// float area_of_a_rectangle(float a,float b);
// int main(){
//     float a=5.0;
//     float b=10.00;
//     printf("\nThe area of a rectangle is:%f",area_of_a_rectangle(a, b));
//     float side=6;
//     printf("\nThe area of a square is :%f",area_of_a_square(side));
//     float rad=10.33;
//     printf("\nThe area of  a circle is :%f",area_of_a_circle(rad));


//     return 0;
// }
// float area_of_a_square(float side){
//     return side*side;
// }
// float area_of_a_circle(float rad){
//     return 3.141*rad*rad;
// }
// float area_of_a_rectangle(float a,float b){
//     return a*b;
// }
// #include <stdio.h>
// float price(float a);
// int main(){
//     float a,b;
//     printf("Enetr a number:");
//     scanf("%f",&a);
//     b=price(a);
//     printf("The increased amount is: %f\n",b);

   
    
//     return 0;
// }
// float price(float a){
   
//     return a +(a*0.18);


// }
#include<stdio.h>
void printhw(int count);
int main(){
    printhw(5);
    return 0;
}
void printhw(int count){
    if(count ==0){
        return;
    }
        printf("hello world\n");
        printhw(count - 1);
    
}