#include <stdio.h>
int main(){
    int year;
    printf("Enter Year:");
    scanf("%d",&year);
    if (year%4==0)
    {
        printf("This leap Year");
    }
    else
    {
        printf("This is not leap year");
    }
    
    
}