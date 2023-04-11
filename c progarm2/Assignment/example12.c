// WRITE A PROGRAM IS MULTIPLE OF 7

# include<stdio.h>
# include<conio.h>
int main(){
    int n;

    printf("Enter Number :");
    scanf("%d",&n);
    
    if(n%7==0){
        printf("Number is multiple of 7 .");
    }
    else{
        printf("Number is Not multiple of 7  .");
    }
    return 0;
}