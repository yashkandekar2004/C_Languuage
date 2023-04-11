// WRITE A PROGRAM TO PRINT THE NUMBER IN REVERS ORDER 

# include<stdio.h>
# include<conio.h>
void main(){

    int rem,n;

    printf("Enter n : ");
    scanf("%d",&n);   

    while (n>0){
       rem = n%10;printf("%d",rem);
       n = n / 10;
    }
  
}
