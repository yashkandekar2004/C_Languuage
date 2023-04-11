#include <stdio.h>
int main(){
    int a;
      printf ("enter 1 for prime & 2 for even:");
      scanf("%d",&a);
      if(a==1){
        prime();
      }
      else{
        even();

      }}
      int prime(){
        int num,b=0;
        printf("Enter number:");
        scanf("%d",&num);
        for (int i=1;i<=num;i++){
            if(num%i==0){
                b++;
            }
        }
        if(b==1){
          printf("The number is prime");
        }

       else if(b==2){
            printf("The Number is prime");
        }
        else {
            printf("The number is not prime");
        }
      }
      int even(){
        int number;
        printf("Enter number:");
        scanf("%d",&number);
        if(number%2==0){
            printf("The number is even");
        }
        else {
            printf("The number is odd");
        }
      }


      
