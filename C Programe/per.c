#include <stdio.h>
int main(){
    int per;
    printf("Enter Your percentage");
    scanf("%d",&per);
    switch(per){
        case 35 ... 40:
        printf("Student is pass");
        break;
         case 41 ... 60:
        printf("Student is Second");
        break;
         case 61 ... 75:
        printf("Student is first");
        break;
         case 76 ... 100:
        printf("Student is Distingtion");
        break;
        default:
        printf("Failed");
    }
}