// WRITE A PROGRAM TO PRINT FOLLWING OUT PUT 
/*
*****
*****
*****
*****
*/

#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,n;

    printf("Enter number : ");
    scanf("%d",&n);

    for ( i = 1; i <= n ; i++){
     for ( j = 1; j <= n ; j++)
    {
        printf("*");
    }
    printf("\n");
    }
    return 0;    
}