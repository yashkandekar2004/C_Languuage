#include<stdio.h>
#include<conio.h>
void main(){
    int n;
    printf("Enter number . . .");
    scanf("%d",&n);

    switch (n)
    {
        case 0: 
        printf("Zero");
        break;
    
       case 1: 
        printf("one");
        break;

        case 2: 
        printf("two");
        break;

        case 3: 
        printf("three");
        break;

        case 4: 
        printf("for");
        break;

        case 5: 
        printf("five");
        break;

        case 6: 
        printf("six");
        break;

        case 7: 
        printf("seven");
        break;

        case 8: 
        printf("eight");
        break;

        case 9: 
        printf("nine");
        break;
    default:
        break;
    }
    return 0;
}