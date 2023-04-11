// WRITE A PROGRAM OF AREA OF TRIANGLE
# include<stdio.h>
# include<conio.h>
int main(){
    float  AREA,B,H ;
   
    printf("Enter Base & height : ");
    scanf("%f,%f",&B,&H);

   AREA=0.5*B*H;

    printf("Area of the given is : %f",AREA);
    
    return 0;
}