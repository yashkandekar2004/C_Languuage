#include<stdio.h>
int main(){
 sum();
 

    return 0;

}
int sum(){
    int x,y;
    printf("Enter Value of x:");
    scanf("%d",&x);
     printf("Enter Value of y:");
    scanf("%d",&y);
    int z;
    printf("enter case");
    scanf("%d",&z);
    
    switch(z){
        case 1:
        printf("Addition is : %d",x+y);
        break;
         case 2:
        printf("Subtraction is : %d",x-y);
         break;
         case 3:
        printf("Multiplication is : %d",x*y);
         break;
         case 4:
        printf("Divide is : %d",x/y);
         break;
         case 5:
        printf("Reminder is : %d",x%y);
         break;
         default:
         printf("Invalid case");
    }
    

}