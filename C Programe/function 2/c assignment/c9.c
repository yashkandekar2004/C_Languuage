#include <stdio.h>
int main (){
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    int sum=0;
    for (int i = 1; i <= n; i++)
    {
        sum=sum+i;
    }
    printf("Sum 1 to %d:-%d",n,sum);
}