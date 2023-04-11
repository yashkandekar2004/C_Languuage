// sizeof multi
#include<stdio.h>
int main(){
   int i=12; 
   char c='s';
   printf("%d %d %d",sizeof(i),sizeof(c),sizeof(i)*sizeof(c));
   return 0;
}