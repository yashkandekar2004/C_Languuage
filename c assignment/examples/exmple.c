#include<stdio.h>
void Accept(int iNo){
    int Cnt=0;
    for(Cnt=1;Cnt<=iNo;Cnt++){
        printf("\t *");
    }
}
int main(){
    int iValue=0;
    printf("enter Number:");
    scanf("%d",&iValue);
    Accept(iValue);
    return 0;
}