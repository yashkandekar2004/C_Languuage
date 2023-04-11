// WRITE A PROGRAM IS ASCENDING & DESCENDING ORDER

# include<stdio.h>
# include<conio.h>
int main(){
    int a,b,c;

    printf("Enter Number :");
    scanf("%d",&a);

    printf("Enter Number :");
    scanf("%d",&b);

    printf("Enter Number :");
    scanf("%d",&c);

    if ((a>=b)&&(a>=c)){
     if(b>=c){
        printf(" \n Descending order : %d  ",a);
        printf(" \n Descending order : %d  ",b);
        printf(" \n Descending order : %d  ",c);

        printf(" \n Ascending order : %d ",c);
        printf(" \n Ascending order : %d ",b);
        printf(" \n Ascending order : %d ",a);

    }
    
    else{
          printf(" \n Descending order : %d ",a);
          printf(" \n Descending order : %d ",c);
          printf(" \n Descending order : %d ",b);

          printf(" \n Ascending order : %d ",b);
          printf(" \n Ascending order : %d ",c);
          printf(" \n Ascending order : %d ",a);
    }
}
    else if ((b>=a)&&(b>=c)){
        {
            if(a>=c){
          printf(" \n Descending order : %d ",b);
          printf(" \n Descending order : %d ",c);
          printf(" \n Descending order : %d ",a);

          printf(" \n Ascending order : %d ",a);
          printf(" \n Ascending order : %d ",c);
          printf(" \n Ascending order : %d ",b);
        }
        else{
            printf(" \n Descending order : %d ",b);
            printf(" \n Descending order : %d ",c);
            printf(" \n Descending order : %d ",a);

            printf(" \n Ascending order : %d ",a);
            printf(" \n Ascending order : %d ",c);
            printf(" \n Ascending order : %d ",b);
        }
      }
    }
    else if ((c>=a)&&(c>=b)){
          if(a>=c){
          printf(" \n Descending order : %d ",c);
          printf(" \n Descending order : %d ",a);
          printf(" \n Descending order : %d ",b);
          
          printf(" \n Ascending order : %d ",b);
          printf(" \n Ascending order : %d ",a);
          printf(" \n Ascending order : %d ",c);
        }
    }
    else{
            printf(" \n Descending order : %d ",c);
            printf(" \n Descending order : %d ",b);
            printf(" \n Descending order : %d ",a);

            printf(" \n Ascending order : %d ",a);
            printf(" \n Ascending order : %d ",b);
            printf(" \n Ascending order : %d ",c);
        }
}