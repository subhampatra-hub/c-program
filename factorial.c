#include<stdio.h>
int main(){
    int a,i,fact=1;
    printf("Enter a number : ");
    scanf("%d",&a);
    if(a<=0){
        printf("Zero is not a factorial number");
    }
    else{
        for(i=1;i<=a;i++){
            fact *=i;
        }
        printf("The factorial of the number %d is: %d ",a,fact);
    }
    
    return 0;
}