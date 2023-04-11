#include <stdio.h>
int main(){
    int id;
    printf("enter id no");
    scanf("%d",&id);
    switch(id){
        case 1:
        printf("Go to the first floor");
        break;
         case 2:
        printf("Go to the Second floor");
        break;
         case 3:
        printf("Go to the confernce room");
        break;
         case 4:
        printf("Go to the Security romm");
        break;
         case 5:
        printf("Go to the Cantin");
        break;
         case 6:
        printf("Go to the Rao sir cabin");
        break;          
        default:
        printf("Invaild Id no");

    }
}