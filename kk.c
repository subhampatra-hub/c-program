#include<stdio.h>
int main(){
    int a;
    printf("Bapnu....Please enter a number..which you want the table of the number  :-   ");
    scanf("%d",&a);
    for(int i=1;i<=10;i++){
        printf("\n%d x %d =%d",a,i,a*i);

    }
    return 0;
}