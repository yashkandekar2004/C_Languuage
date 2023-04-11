#include<stdio.h>
#include<conio.h>
void main(){
    int i,fact=1,n;

    printf("ENter number . . .");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
      fact=fact*i;
      printf("factorail of the given number is . . . . %d",fact);
      
    }
    
}