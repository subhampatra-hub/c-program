#include<stdio.h>
int main(){
    int a=5,b;
    b=a++ + ++a + a++;
    printf("\na=%d",a);
    printf("\nb=%d",b);
    return 0;
}