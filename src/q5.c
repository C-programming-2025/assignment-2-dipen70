#include<stdio.h>
int main(){
    int n,fact=1,i;
    printf("enter a number: ");
    scanf("%d",&n); 
    i=1;
    while (i<=n){
        fact = fact *i;
        i++;
    }
    printf("Factorial of %d is %d\n",n,fact);
    return 0;
}