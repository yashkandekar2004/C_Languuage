#include <stdio.h>
int main(){
    char Name[30];
    printf("Enter Name:");
    scanf("%[^\n]",&Name);

    printf("Your name is %s ",Name);

}