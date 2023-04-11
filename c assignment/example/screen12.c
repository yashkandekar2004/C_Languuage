#include<stdio.h>
float bill(int amount){
    if (amount<500)
    {
        return amount;
    }
    else if(amount>=500 && amount<1500){
        return amount-(amount*10)/100;
    }
    else if(amount>=1500){
        return amount-(amount*15)/100;
    }
    
}
int main(){
    int amount=0;
    float discount=0;
    printf("Enter amount ");
    scanf("%d",&amount);
    discount=bill(amount);
    printf("Total Amount = %d\n Disconted amount =%0.0f",amount,discount);
    return 0;
}