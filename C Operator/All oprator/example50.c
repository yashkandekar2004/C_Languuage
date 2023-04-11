// sizeof multi 2
#include<stdio.h>
int main(){
   double d=5901; 
  float f='s';
   printf("%d %d %d",sizeof(d),sizeof(f),sizeof(d)*sizeof(f));
   return 0;
}