// // #include<stdio.h>
// // void printstring(char arr[]);
// // int main(){
// //     // char name[]={'s','u','b','h','a','m','\0'};
// //     // printf("name is :%s",name);
// //     // char name[]="subham patra";
// //     char fname[]="subham";
// //     char lname[]="patra";
// //     printstring(fname);
// //     printstring(lname);

    
// //     return 0;
// // }
// // void printstring(char arr[]){
// //     for(int i=0;arr[i] !='\0';i++){
// //         printf("%c",arr[i]);
// //     }
// //     printf("\n");
// // }

// // #include<stdio.h>
// // int main(){
// //     char name[50];
// //     int a;
// //     double b;
// //     printf("Enter your name :");
// //     scanf("%s",name);
// //     printf("Enter your age: ");
// //     scanf("%d",&a);
// //     printf("enter your mobile number :");
    
    
// //     scanf("%d",&b);
// //     printf("your name is : %s\n",name);
// //     printf("your age is :%d\n",a);
// //     printf("your mobile number is : %d",b);
// //     return 0;
// // }




// #include<stdio.h>
// int main(){
//     char name[100];
//     gets(name);
//     puts(name);
//     return 0;
// }



#include<stdio.h>
#include<string.h>
void printstring(char arr[]);
int main(){
    char fname[100]="subham";
    char  lanme[]="patra";
    strcat(fname,lanme);
    puts(fname);
    
    return 0;
}