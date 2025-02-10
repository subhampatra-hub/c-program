#include<stdio.h>
int main(){
    int a=1,i;
    printf("Mamuni.....please enter a number which you want the multiplication table   :- ");
    scanf("%d",&a);
    for( i=1;i<=10;i++){
        
        printf("%d X %d=%d\n",a,i,a*i);
    }
    
    


    return 0;
}