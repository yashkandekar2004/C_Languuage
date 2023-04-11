#include<stdio.h>
void display(int no){
    int cnt=1;
    if (no<=0)
    {
        no=-no;
    }
    for ( cnt = 1; cnt < no; cnt++)
    {
        if(no%cnt==0){
            printf("%d",cnt);
        }
    }
    
    
}
int main(){
    int value=0;
    printf("Enter number :");
    scanf("%d",&value);
    display(value);
    return 0;
}