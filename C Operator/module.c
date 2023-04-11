//find the reminder


#include <stdio.h>
int main(){
    int a,b;
    printf("Enter value of a:");
    scanf("%d",&a);
        printf("Enter value of b:");
    scanf("%d",&b);
    int c=a%b;
    printf("The Reminder is ",c);
}