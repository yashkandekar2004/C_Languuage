// WRITE A PROGRAM IS COMPARE TWO NUMBER'S

# include<stdio.h>
# include<conio.h>
int main(){
    int a,b;

    printf("Enter Number :");
    scanf("%d",&a);

    printf("Enter Number :");
    scanf("%d",&b);
    
    if(a>b){
        printf(" a is greater then b ");
    }
    else if (b>a){
        printf(" b is greathen a");
    }
    else{
        printf("Both are equal");
    }

    return 0;
}