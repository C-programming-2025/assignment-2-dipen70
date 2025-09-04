#include<stdio.h>
int main(){
    int n, abs_value;
    printf("enter an integer:");
    scanf("%d",&n);
    abs_value= n<0? n*-1: n;
    printf("absolute value of %d is %d",n,abs_value);
    return 0;
}