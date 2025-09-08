#include <stdio.h>

int main() {
    int i = 1, count = 0, n, div;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n) {
        div = n % i;
        if (div == 0) {
            count = count + 1;
        }
        i++; 
    }

    if (count > 2) {
        printf("%d is not a prime number\n", n);
    }
    else if (count == 2) {
        printf("%d is a prime number\n", n);
    }
    else {
        printf("Error value\n");
    }

    return 0;
}
