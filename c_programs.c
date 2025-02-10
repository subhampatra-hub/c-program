#include<stdio.h>
int main(){
    int a;
    int count=0;
    printf("Enter a number:-");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        if(a%i==0){
            count++;
        }
    }
        if(count==2){
            printf(" It is a prime numner");
        }
        else{
            printf("\nit is not a prime n umber");
        }
   

    
    
    return 0;
}    