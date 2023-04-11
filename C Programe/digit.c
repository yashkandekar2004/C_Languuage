#include<stdio.h>
int main(){
    char a;
printf("Enter Char & Number:");
scanf("%C",&a);
if(a>='0' && a<='9'){
    printf("a is number");
}
else{
    printf("a is character");
}
return 0;
}
