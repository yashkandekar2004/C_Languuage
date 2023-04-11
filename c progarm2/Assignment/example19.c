// WRITE A PROGRAM TO USING A DO WHILE LOOP

# include<stdio.h>
# include<conio.h>
int main(){
    int i =1,n;

    printf("Enter n : ");
    scanf("%d",&n);

     i = n ;
   
   do
   {
    printf("%d \t",i);
    i--;
   } while (i>=1);
   
    return 0;
}
