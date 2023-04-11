// WRITE A PROGRAM TO PRINT SUM OF GIVEN FIRST N NUMBER IN C 

#include<stdio.h>
#include<conio.h>
int main(){
    int n, newn,i,sum=0;

    printf("Enter number : ");
    scanf("%d",&n);

    printf("Number enterd . . . \n");

    for ( i = 1; i <= n ; i++)
    {
       scanf("%d",&newn);
       sum = sum + newn ;
    }
    printf("Sum of given n digis is . . . %d",sum);
    
}