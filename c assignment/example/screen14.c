#include<stdio.h>
#include<stdlib.h>
int fees(int stand){
    switch(stand){
        case 1:
        return 8900;
        case 2:
        return 12790;
        case 3:
        return 21000;
        case 4:
        return 23450;
        default:
        printf("Wrong Input");
        exit(0);
    }
}
int main(){
    int stand=0,schoolfee=0;
    printf("Enter The Standard => ");
    scanf("%d",&stand);
    schoolfee=fees(stand);
    printf("Fees for standard %d is %d ",stand,schoolfee);
    return 0;
}