#include <stdio.h>
int main(){
    int arr [5]={1,2,3,4,5};
    int sum=0;
    for (int i = 0; i < 5; i++)
    {
     sum+=arr[i];
    }
    float avg=(float)sum/5;
printf("Average Of Array Element=%2f",avg);
return 0;
    
}