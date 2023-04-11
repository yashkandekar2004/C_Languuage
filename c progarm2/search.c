#include <stdio.h>
int main(){
    int arr[5]={3,6,8,4,1,};
    int search=1;
    int found =0;
    for (int i = 0; i < 5; i++)
    {
       if (arr[i]==search)
       {
        found=1;
        break;
       }
       
    }
    if (found==1)
    {
      printf("Element found");
    }
    else
    {
        printf("Element not found");
    }
    
    return 0;
    
}