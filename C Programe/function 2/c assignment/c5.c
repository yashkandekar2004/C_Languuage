#include <stdio.h>
void multdisplay(int a){
    for (int i = 1; i <= 5; i++)
    {
        printf("%d", a);
    }
    
}
int main(){
  int  ivalue=0;
printf("enter number >=");
scanf("%d",&ivalue);
 multdisplay(ivalue);
return 0;
}