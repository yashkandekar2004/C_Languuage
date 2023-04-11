#include <stdio.h>
void evenfactor(int num){
    int Cnt=1;
  if (num<=0)
  {
    num=-num;
  }
  for (Cnt = 1; Cnt < num; Cnt++)
  {
    if (num%Cnt==0)
    {
     printf("%d",Cnt);
    }
    
  }
  
  }
  int main(){
    int value;

    printf("Enter number:");
    scanf("%d",&value);
    evenfactor(value);
return 0;
  }