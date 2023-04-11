#include<stdio.h>
int main(){



    int num;
    printf("Enter num");
    scanf("%d",&num);

switch(num){
    case 1:
    sum();
    break;
     case 2:
    sub();
    break;
     case 3:
    multiply();
    break;
     case 4:
    divide();
    break;
}}


int  sum(){
    int a=10;
    int b=20;
    int c=a+b;
    printf("Addtion is : %d",c);

    
}
int sub(){
    int c=10;
    int d=20;
    int e=c-d;
    printf("subtraction is : %d",e);
    

}
 int multiply(){
    int f=10;
    int g=20;
    int h=f*g;
    printf("Multiplication is : %d",h);
    

}
 
int divide(){
     int p=10;
    int r=20;
    int s=p/r;
        printf("division is : %d",s);
}
