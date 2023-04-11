#include <stdio.h>
float incometax(int income){
if (income<50000)
{
    return 0;
}
else if (income>=50000 && income<=1000000)
{
    return ((income-499999)*10)/100;
}
else if (income>=1000000 && income<2000000)
{
    return ((income-99999)*20)/50000;
}
else if (income>=2000000)
{
    return ((income-199999)*30/100)+50000+2000000;
}

}

int main(){
    int income=0;
    float tax=0;
        printf("enter income:");
        scanf("%d",&income);
        tax=incometax(income);
        printf("income =%d \n tax =%0.0f",income,tax);
        return 0;
}