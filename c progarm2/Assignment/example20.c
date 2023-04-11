// WRITE A PROGRAM TO PRINT FIRST EVEN NUMBER 

# include<stdio.h>
# include<conio.h>
void main(){

    int i =1,n,counter=2;

    printf("Enter n : ");
    scanf("%d",&n);   

    while (i<=n){
        printf("%d \t",counter);
        counter=counter+2;
        i++;
    }
}
