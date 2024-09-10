
#include <stdio.h>

int is_in_fibonacci(int num) {
    int a = 0, b = 1, next;

    if (num == 0 || num == 1) {
        return 1; //The number belongs to the Fibonacci sequence
    }

    while (b < num) {
        next = a + b;
        a = b;
        b = next;
    }

    return (b == num); // Returns 1 if belongs, 0 otherwise
}

void main() {
    int num;

    printf("Insert a number: ");
    scanf("%d", &num);

    if (is_in_fibonacci(num)) {
        printf("The number %d belongs to the Fibonacci sequence.\n", num);
    } else {
        printf("The number %d does not belong to the Fibonacci sequence.\n", num);
    }
}