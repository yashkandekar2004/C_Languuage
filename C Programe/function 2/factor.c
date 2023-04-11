#include <stdio.h>
int main(){
    int a,f=1;
    printf("Enter number:");
    scanf("%d",&a);
    for (int i = 1; i <=a; i++)
    {
        f=f*i;
    }
    printf(" factorial is %d",f);
    
}