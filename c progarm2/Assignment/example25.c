//WRITE A PROGRAM TO PRIN TABLE OF A GIVEN NUMBER N IN C LANGUAGE

#include<stdio.h>
#include<conio.h>
int main(){
    int i,n;

   printf("Enter number : ");
    scanf("%d",&n);

    for (i = 1; i <= 10; i++)
    {
      printf("%d X %d = %d \n ",n,i,n*i);
    }
    return 0 ;
}