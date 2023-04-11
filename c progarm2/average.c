#include <stdio.h>
int main(){
    int arr[5]={6,10,30,40};
   int sum=0;
   float ave;
    for (int  i = 0; i < 5; i++)
    {
      sum+=arr[i];
      ave=(float)sum/5;

    }
    printf("The average of array: %2f",ave);
}