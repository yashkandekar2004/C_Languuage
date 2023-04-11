#include <stdio.h>
int main(){
    int a;
    printf("Enter 1 for prime & 2 for even odd");
    scanf("%d",&a);
    if(a==1){
       prime();

    }
    else{
       even ();
    }
}

int prime(){
 int d,b,c;
    printf("Enter Number");
    scanf("%d",&d);
    for(int i=1;i<=d;i++){
        if(d%i==0){
            c++;
        }
    }
    if(c==2){
        printf("Number is Prime");
    
    }
    else{
        printf("Number is not prime");
    }
    return 0;
}

int even(){
    int n;
    printf("Enter number");
    scanf("%d",&n);

switch(n%2==0){
    case 1:
    printf("The number is even");
    break;
    default:
    printf("The number is odd");
    return 0;
} 
}