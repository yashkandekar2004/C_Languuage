#include<stdio.h>
int main(){
    int per;
    printf("Enter Per");
    scanf("%d",&per);
    if(per<35){
        printf("Student is fail");
    }
    if(per>35&&per<40){
        printf("Student is Pass");
    }
    if(per>40&&per<60){
        printf("Student is Second");
    }
    if(per>60&&per<75){
        printf("Student is First");
    }
     if(per>75&&per<=100){
        printf("Student is Distinction");
    }
     if(per>100){
        printf("Student is error");
    }

}