#include <stdio.h>
void Accept(int iNo){
int iCnt=0;
for (iCnt = 1; iCnt <=iNo ; iCnt++)
{
   printf("\t *");
}

}
int main(){
  int  ivalue=0;
printf("enter number");
scanf("%d",&ivalue);
Accept (ivalue);
return 0;
}
