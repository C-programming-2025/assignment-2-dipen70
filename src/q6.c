#include<stdio.h>
int main(){
    int i,num,mult=1;
    printf("enter a number: ");
    scanf("%d",&num);
    for (i=1;i<=10;i++){
        mult = mult *i;
        printf("%d X %d = %d \n", num,i,mult);
    }
    return 0;
}