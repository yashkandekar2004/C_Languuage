// WRITE A PROGRAM TO PRINT FOLLWING OUT PUT 
/*
*********
 ********
   ******
    *****
      ***
       **
        *
*/

#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,k,n;

    printf("Enter number : ");
    scanf("%d",&n);

    for ( i = n ; i >= 1 ; i--){
     for ( k = 1; k <=(n-i) ; k++)
    {
        printf("");
    }
    
    for ( j = 1; j <= i; j++)
    {
       printf("*");
    }
    printf("\n");
}
   return 0; 
}