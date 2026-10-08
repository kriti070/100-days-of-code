// Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main() {
    int n, a[20], i = 0;

    scanf("%d", &n);

    while (n > 0) {
        a[i] = n % 10;
        i++;
        n = n / 10;
    }

    for (i = i - 1; i >= 0; i--) {
        if (a[i] == 0)
            printf("1");
        else
            printf("0");
    }

    return 0;
}