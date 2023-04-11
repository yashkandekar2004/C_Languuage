#include <stdio.h>
int main(){
    int arr[5]={1,5,3,9,10};
    int min=arr[0];
    for (int i = 1; i < 5; i++)
    {
      if (arr[i]< min)
      {
        min=arr[i];
      }
       
    }
    printf("smallest element in the array:%d",min);
    
}