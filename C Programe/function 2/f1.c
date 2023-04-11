#include <stdio.h>
int main(){
    int a;
    printf("Enter 0 for indian & 1 for french:");
    scanf("%d",&a);
    if (a==0){
        ind();
    }
    else{
        bon();
    }
} 
int ind(){
    printf("Namaste");
}
int bon(){
    printf("Bonjour");
}






