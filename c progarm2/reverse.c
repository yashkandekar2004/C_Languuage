#include <stdio.h>
int main (){
    int arr [5]={1,2,3,4,5};
    printf("Oringinal array:");
    for (int i = 0; i < 5; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    int temp;
    for (int i = 0,j=4;i<j;i++,j--)
    {
       temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
    }
    printf("Reversed array:");
    for (int i = 0; i < 5; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
    
    
    
}