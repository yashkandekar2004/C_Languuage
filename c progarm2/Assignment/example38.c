#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,n;

    printf("Enter number : ");
    scanf("%d",&n);

    for ( i = 0; i <= n; i++)
    {
       for ( j = 1; j <=i; j++)
       {
        printf("%d",j);
       }
       printf("1\n");
    }
    }