#include<stdio.h>
int main(){
    int a,b,temp=0;
    printf("Enter two number:- ");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("The swap value is:%d %d",a,b);
    

    return 0;
}