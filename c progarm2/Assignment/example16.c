# include<stdio.h>
# include<conio.h>
int main(){

    int age;
    char Maritalstatus,Gender;

    printf("Enter Maritalstatus,Gender,age : ");
    scanf("%c",&Maritalstatus);

    printf("Enter Maritalstatus,Gender,age : ");
    scanf("%c",&Gender);

    printf("Enter Maritalstatus,Gender,age : ");
    scanf("%d",&age);

    if (Maritalstatus =='m'){
       printf("You can not marry ! ");
       }

       else if (Maritalstatus =='u'){
        if(Gender == 'm'){
        if(age>=21){
            printf("You can maryy !");
        }
        else{
            printf("You can Not marry !");
        }        
        }
        }


         else if (Gender == 'f'){
            if(age>=18){
            printf("You can maryy !");
        }
        else{
            printf("You can Not marry !");
        }        
        }
        else{
            printf("Invalid input Gender \n");
        }

     
       if (Gender == 'g')
       {
       printf("Invalid input Marital status \n");
       }     
       else{
        printf("Invalid input Marital status \n");
       }
}
      