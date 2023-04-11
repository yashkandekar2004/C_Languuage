#include <stdio.h>
void display(int iNo, int fre){
    int i=0;
    if (fre<0)
    {
        fre=(fre);
    }
    for (int i = 1; i <= fre; i++)
    {
       printf("%d",iNo);
    }
    
    
}
int main(){
    int value=0;
    int count=0;
    printf("Eneter value :");
    scanf("%d",&value);
      printf("Eneter value of count :");
    scanf("%d",&count);
    display(value,count);
}