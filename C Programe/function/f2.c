#include <stdio.h>
int main(){
    int num;
    printf("Enter 1 for prime & 2 for even odd");
    scanf("%d",&num);
    if (num==1){
        prime();
    }
    else{
        even ();
    }
}
int prime(){
    int n ,b;
    printf("Enter number");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        if(n%i==0){
            b++;
        }
    }
    if (b==2){
        printf("This is prime number");
    }
    else{
        printf("This is not prime number");
    }
}

int even (){
    int number;
    printf("Enter number:");
    scanf("%d",&number);
    if (number%2==0){
        printf("The number is even");
    }
    else{
        printf("The number is odd");
    }
}