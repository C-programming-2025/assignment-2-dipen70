#include<stdio.h>
int main(){
    int num,i,mult;
    printf("enter a number: ");
    scanf("%d",&num);
    for (i=1;i<=10;i++)
    {
        mult= i*num;
        printf("%d X %d = %d\n",num,i,mult);
    }
    return 0;
}