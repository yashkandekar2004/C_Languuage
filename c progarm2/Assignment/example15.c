// WRITE A PROGRAM TO ACCEPT ROOL NUMBER & MARKS FOR 3 SUBJECT ,
//PRINT TOTAL  MARKS & AVERAGE , ALSO, PRINT GRADE BY CONSIDERING ,
/*
AVG>=60 GREAD A 
AVG<=60 GREAD B
AVG<50 GREAD C 
*/  
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

    // printf(" \n student roll number : %d",roll_no);
    // printf(" \n Marks 1 : %d",m1);
    // printf(" \n Marks 2 : %d",m2);
    // printf(" \n Marks 3 : %d",m3);
    // printf(" \n Total : %d",total);
    // printf(" \n Average : %f",average);

    printf(" \n Total is : %d",total);
    printf(" \n Average is: %f",average);
       
       if(average>=60){
        printf(" \n Grade : A");
       }

       else if((average>=50)&&(average<60)){
        printf(" \n Grade : b");
       }

      else if((average>=40)&&(average<50)){
        printf(" \n Grade : c");
       }

       else{
        printf(" \n  Grade : F");
       }
       
    return 0 ;
}