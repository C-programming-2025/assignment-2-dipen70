#include<stdio.h>
int main (){
    int num,i=2,count=0;
    printf("enter a number: ");
    scanf("%d",&num);
    while (i<=num/2){
        if ( num%i==0){
            count++;
            break;
        }
        i++;
    }
    if (count==0 && num!=1){
        printf("%d is a prime number\n",num);
    }
    else{
        printf("%d is not a prime number\n",num);
    }
    return 0;
}