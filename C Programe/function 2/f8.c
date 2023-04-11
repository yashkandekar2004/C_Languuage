#include <stdio.h>
int mult(int n);
int main(){
    int n;
    printf("Enter first number :");
    scanf("%d",&n);
    mult (n);
   



}
int mult (int x){
    for (int i=1;i<=10;i++){
        printf("Table %d*%d:%d \n ",x,i,i*x);
    }
}