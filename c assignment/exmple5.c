#include<stdio.h>
int main(){
    char name[30];
    printf("Please Enter Full Name :");
    scanf("%[^\n]",&name);
    printf("Your Name is %s",name);
    return 0;
}