#include<stdio.h>
void display(int me){
    if (me < 10)
    {
        printf("Hello");
    }
    else{
        printf("Demo");

    }
    
}
int main(){
    int iValue=0;
    printf("enter Number:");
    scanf("%d",&iValue);
    display(iValue);
    return 0;
}