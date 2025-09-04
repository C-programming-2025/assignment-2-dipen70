#include<stdio.h>
int main (){
    int pos_num, fact=1,i;
    printf("enter a positive integer: ");
    scanf("%d",&pos_num);
    for (i=1; i<=pos_num;i++){
        fact = fact*i;
    }
    printf("factorial of %d is %d",pos_num,fact);
return 0;
}