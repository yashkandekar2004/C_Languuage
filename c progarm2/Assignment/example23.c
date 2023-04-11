// WRITE A PROGRAM TO PRINT A SUM OF IT'S DIGITS IN C

# include<stdio.h>
# include<conio.h>
void main(){
    int rem,sum=0,n;

    printf("Enter n : ");
    scanf("%d",&n);   

    while (n>0){
       rem = n%10;
       sum = sum + rem ;
       n = n / 10;
    }
    printf("Sum of Digits . . .  %d ",sum);
}
