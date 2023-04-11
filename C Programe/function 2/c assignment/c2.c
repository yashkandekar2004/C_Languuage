#include <stdio.h>
void display(int iNo){
    int iCnt=0;
    while (iCnt < iNo)
    {
      printf("\t *");
      iCnt++;
    }
    
}
int main(){
  int  ivalue=0;
printf("enter number");
scanf("%d",&ivalue);
 display(ivalue);
return 0;
}
