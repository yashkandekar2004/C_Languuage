#include<stdio.h>
int main(){
 sum();
 sub();
 multiply();

    return 0;

}
int sum(){
    int x,y;
    printf("Enter Value of x:");
    scanf("%d",&x);
     printf("Enter Value of y:");
    scanf("%d",&y);
    int z=x-y;
    printf("Addition is : %d ",z);
    

}