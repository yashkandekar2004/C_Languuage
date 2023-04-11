#include <stdio.h>
int main(){
    int a;
    printf("Enter 1 for indian code& 2 for french code :");
    scanf("%d",&a);
    switch(a){
        case 91:
        indian();
        break;
        case 33:
        french();
        break;
    }
}
int indian(){
    printf("Namaste");
}
int french(){
    printf("bonjour");
}