// WRITE A PROGRAM OF LARGEST VALUE

# include<stdio.h>
# include<conio.h>
int main(){
    int a,b;

    printf("Enter number : ");
    scanf("%d",&a);

    printf("Enter number : ");
    scanf("%d",&b);

    if(a>b)
        printf("Largest value is . . . . %d",a);
    
     else
        printf("Largest value is . . . . %d",b);
    
    return 0;
}