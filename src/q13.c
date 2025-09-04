#include <stdio.h>
int main() {
    int i=0, sum = 0;
while (i<=50){
        sum = sum + i;   
        i=i+2;
    }               

    printf("Sum of even numbers from 1 to 50 = %d\n", sum);
    return 0;
}
