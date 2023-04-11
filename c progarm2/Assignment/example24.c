// WRITE A PROGRAM TO CHECK IF IT IS ARMSTRONG NUMBER OR NOT

# include<stdio.h>
# include<conio.h>
int main(){
    int temp,rem,sum=0,n;

    printf("Enter n : ");
    scanf("%d",&n);   
    temp = n ;

    while (n>0){
       rem = n%10;
       sum = sum +rem*rem*rem ;
       n = n / 10;
    }
    
    if (temp == sum ){
        printf("Armstrong number ");
    }

    else{
        printf("Not an Armstrong number ");
    }
    return 0;
}
