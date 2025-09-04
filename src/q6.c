#include<stdio.h>
int main(){
    int i=1,num,mult=1;
    printf("enter a number: ");
    scanf("%d",&num);
    do {
        mult = mult *i;
        printf("%d X %d = %d \n", num,i,mult);
        i++;    
    } while (i<=10);
    return 0;
}