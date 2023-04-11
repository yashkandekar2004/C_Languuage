#include <stdio.h>
int main(){
    int n,prev=0,cur=1,next;
    printf("Enter number:");
    scanf("%d",&n);
    printf(" Fibancci series %d \n",n);
    while(prev<=n){
        printf ("%d \n",prev);
        next=cur+prev;
        prev=cur;
        cur=next;
    }
}