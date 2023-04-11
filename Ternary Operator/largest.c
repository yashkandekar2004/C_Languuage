#include <stdio.h>
int main(){
    int a,b,c;
    int smallest;
    printf("Enter value of a");
    scanf("%d",&a);
      printf("Enter value of b");
    scanf("%d",&b);
      printf("Enter value of c");
    scanf("%d",&c);
(a>b&&a>c)?printf("A is largest"):(b>a&&b>c)?printf("B is largest"):printf("C is largest");
return 0;

    
}