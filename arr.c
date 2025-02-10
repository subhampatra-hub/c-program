#include<stdio.h>

int main(){
    int age1=155;
    int age2=119;
    int *ptr1=&age1;
    int *ptr=&age2;
    printf("ptr1=%u\n",ptr1,ptr,ptr1-ptr);
    ptr=&age1;
    printf("ptr=%u",ptr==ptr1);
    return 0;
}
#include<stdio.h>
int main(){
    int adhar[5];
    int i;
    int *ptr=&adhar[0];
    for( i=0;i<5;i++){
        printf("%d index :",i);
        scanf("%d",adhar[i]);
    }
    for(i=0;i<5;i++){
        printf("%d index=%d\n",i,adhar[i]);
    }

    return 0;
}