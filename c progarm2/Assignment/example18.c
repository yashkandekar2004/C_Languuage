// WRITE A PROGRAM TO USING A WHILE LOOP

# include<stdio.h>
# include<conio.h>
int main(){
    int i =1,n;

    printf("Enter n : ");
    scanf("%d",&n);

    while (i<=n)
    {
        printf("%d \t",i);
        i++;
    }
    return 0;
}
