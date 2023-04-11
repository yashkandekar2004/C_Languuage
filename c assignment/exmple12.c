#include<stdio.h>
float tax(int income){
    if (income<500000)
    {
        return 0;
    }
    else if(income>=500000 && income<1000000){
        return ((income-499999)*10)/100;
    }
    else if(income>=1000000 && income<2000000){
        return ((income-999999)*20)+50000;
    }
    else if(income>=2000000){
        return (((income-1999999)*30/100))+50000+200000;
    }
    
    
}
int main(){
    int income=0;
    float intax=0;
    printf("enter income :");
    scanf("%d",&income);
    intax=tax(income);
    printf("Income = %d \ntax =%0.0f",income,intax);
    return 0;
}