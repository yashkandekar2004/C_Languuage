#include <stdio.h>
int main(){
    int n,fact;
    fact=1;
    printf("Enter number");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("Factorial number %d ",fact);
}