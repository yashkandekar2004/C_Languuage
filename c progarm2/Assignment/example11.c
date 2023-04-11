// WRITE A PROGRAM IS DIVISIBLE BY 5

# include<stdio.h>
# include<conio.h>
int main(){
    int n;

    printf("Enter Number :");
    scanf("%d",&n);
    
    if(n%5==0){
        printf("Number is divisible by 5 .");
    }
    else{
        printf("Number is Not divisible by 5 .");
    }
    return 0;
}