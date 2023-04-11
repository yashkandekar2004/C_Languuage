// WRITE A PROGRAM OF SQUARE & CUBE 
# include<stdio.h>
# include<conio.h>
int main(){
    int n,square,cube;
   
    printf("Enter Number : ");
    scanf("%d",&n);

    square=n*n;
    cube=n*n*n;

    printf("\n square is : %d",square,cube);
    
    return 0;
}