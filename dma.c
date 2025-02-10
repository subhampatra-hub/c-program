// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int a;
//     int *ptr;
//     printf("enter n:");
//     scanf("%d",&a);

//     ptr=(int*)calloc(a,sizeof(int));
   

    
//     for(int i=0;i<a;i++){
//         printf("%d\n",ptr[i]);
//     }
//     return 0;
// }






// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int a=5;
//     int *ptr;
//     ptr=(int*)calloc(3,sizeof(int));
//     // ptr[0]=10;
//     // ptr[1]=20;
//     // ptr[2]=30;
    
//     for(int i=0;i<3;i++){
//         printf("%d\t",ptr[i]);
//     }
//     free(ptr);
//     ptr=(int*)calloc(2,sizeof(int));
//     // ptr[0]=10;
//     // ptr[1]=20;
//     // ptr[2]=30;
    
//     for(int i=0;i<2;i++){
//         printf("%d\t",ptr[i]);
//     }

//     return 0;
// }




// #include<stdio.h>
// #include<stdlib.h>
// int main(){
    
//     int *ptr;
//     printf("Enter five number");
    
//     ptr=(int *)calloc(5,sizeof(int));

//     for(int i=0;i<5;i++){
//         scanf("%d",&ptr[i]);
        
//     }
//     ptr=realloc(ptr,8);
//     printf("Enter eight number:");
//     for(int i=0;i<8;i++){
//         scanf("%d",&ptr[i]);
//     }
//     for(int i=0;i<8;i++){
//         printf("number %d is %d\n",i,ptr[i]);
//     }
//     return 0;
// }






