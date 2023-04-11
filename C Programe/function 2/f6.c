#include <stdio.h>
int sum(int a,int b);
int main(){
    int a,b;
    printf("Enter First number:");
    scanf("%d",&a);
     printf("Enter second number:");
    scanf("%d",&b);
    int s=sum(a,b);
    printf("Sum is %d \n",a,b,s);


}
int sum(int x,int y){
    return x+y;
}





