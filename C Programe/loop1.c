#include <stdio.h>
int main(){
    int n,f;
    f=0;
    printf("Enter Number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        f=f+i;
    }
    printf("Addtion of 1 to 10 : %d",f);
}