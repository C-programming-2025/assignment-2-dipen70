#include <stdio.h>
int main() {
    int i, sum = 0;

    for (i = 2; i <= 50; i = i + 2) {  
        sum = sum + i;                  
    }

    printf("Sum of even numbers from 1 to 50 = %d\n", sum);
    return 0;
}
