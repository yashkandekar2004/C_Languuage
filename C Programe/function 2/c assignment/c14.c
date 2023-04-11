#include <stdio.h>
int schoolfees(int standard){
    switch (standard)
    {
    case 1:
      return 8900;
        break;
        case 2:
      return 12790;
        break;
        case 3:
      return 21000;
        break;
        case 4:
      return 23450;
        break;
        
    
    default:
    printf("Wrong input");
        break;
    }

}
int main(){
    int standard=0;
    int fees=0;
    printf("Enter standard:");
    scanf("%d",&standard);
    fees =schoolfees(standard);
    printf("Fees Standard %d is %d ",standard,fees);
}