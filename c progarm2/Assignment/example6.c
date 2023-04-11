// WRITE A PROGRAM OF AVERAGE  
# include<stdio.h>
# include<conio.h>
int main(){

    int roll_no,m1,m2,m3,total;
    float average;

    printf("Enter roll number :");
    scanf("%d",&roll_no);

    printf("Enter marks 1 :");
    scanf("%d",&m1);

    printf("Enter marks 2 :");
    scanf("%d",&m2);

    printf("Enter marks 3 :");
    scanf("%d",&m3);

    total = m1+m2+m3;
    average = total / 3.0 ;

    printf(" \n student roll number : %d",roll_no);
    printf(" \n Marks 1 : %d",m1);
    printf(" \n Marks 2 : %d",m2);
    printf(" \n Marks 3 : %d",m3);
    printf(" \n Total : %d",total);
    printf(" \n Average : %f",average);
       
    return 0 ;
}