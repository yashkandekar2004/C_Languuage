#include <stdio.h>
int main(){
     float price[3];
    printf("Enter 3 prices :");
    scanf("%d",&price[0]);
     scanf("%d",&price[1]);
      scanf("%d",&price[2]);

      printf("Total price 1%f \n",price[0]+(0.18*price[0]));
      printf("Total price 1%f \n",price[1]+(0.18*price[1]));
      printf("Total price 1%f \n",price[2]+(0.18*price[2]));
}
