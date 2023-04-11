#include <stdio.h>
int main()
{
    int cardNO;
    printf("Enter id no:");
    scanf("%d", &cardNO);
    switch (cardNO)
    {
    case 1:
        printf(" go to the ground floor");
        break;

    case 2:
        printf(" go to the first floor");
        break;

    case 3:
        printf("go to the security room");
        break;

    case 4:
        printf("go to conference room");
        break;

    case 5:
        printf(" go to cantin");
        break;

    case 6:
        printf("go to the garden");
        break;

    case 7:
        printf(" go to rao sir cabin");
        break;
    default:
        printf("Take the id card");
    }
}