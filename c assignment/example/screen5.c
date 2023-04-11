#include<stdio.h>
void display(int me){
    for (int i = 1; i <= 5; i++)
    {
        printf("%d\t",me*i);
    }
    
}
int main(){
    int value=0;
    printf("Enter value >= ");
    scanf("%d",&value);
    display(value);
    return 0;
}