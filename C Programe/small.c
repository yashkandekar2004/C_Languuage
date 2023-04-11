#include<stdio.h>
int main(){
int a,b,c;
printf("Enter value a");
scanf("%d",&a);
printf("Enter value b");
scanf("%d",&b);
printf("Enter value c");
scanf("%d",&c);
if(a<b&&a>c){
    printf("a is smallest number");
}
else if (b<a&&b<c){
    printf("b is smallest number");
}
 else{
    printf("c is smallest number");
}
return 0;



}