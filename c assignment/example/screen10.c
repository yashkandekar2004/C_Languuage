#include<stdio.h>
void display(int no,int fre){
    int i=0;
    if (fre<0)
    {
        fre=-(fre);
    }
    for (int i = 1; i <= fre; i++)
    {
        printf("%d\t",no);
    }

    
    
}
int main(){
    int value=0;
    int count=0;
    printf("Enter number :");
    scanf("%d",&value);
    printf("Enter frequncy :");
    scanf("%d",&count);
    display(value,count);
    return 0;
}