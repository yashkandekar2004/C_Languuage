#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,k,n;

    printf("Enter number : ");
    scanf("%d",&n);

    for ( i = n-1; i >= 0; i--)
    {
       for ( j = 0; j <=i; j++)
       {
        printf("%c",65+j);
        for (k = 1; k < (n-i); j--)
        {
            printf("%c",65+j);
            printf("\n");
        }
        
       }
       
    }
    
}