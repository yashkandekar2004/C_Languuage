// WRITE A PROGRAM OF SWAPPING  
# include<stdio.h>
# include<conio.h>
int main(){
    int a,b,temp;
   
    printf("Enter Number's : ");
    scanf("%d,%d",&a,&b);

    printf(" \n Before swapping . .  \na = %d , b = %d : ",a,b);

    temp = a ;
    a = b;
    b = temp;

    printf("\n After swapping . . \na = %d , b = %d : ", a,b);
    
    
    return 0;
}