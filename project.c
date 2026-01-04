#include <stdio.h>

int digitalRoot(int n) {
    int sum;

    while (n > 9) {
        sum = 0;

        // Extract digits and add them
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }

        // Repeat if sum is still more than 9
        n = sum;
    }

    return n;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Digital Root = %d\n", digitalRoot(number));

    return 0;
}
