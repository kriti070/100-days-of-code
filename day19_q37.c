// Write a program to find the LCM of two numbers.

#include <stdio.h>

int main() {
    int a, b, i, lcm;

    scanf("%d %d", &a, &b);

    if (a > b)
        i = a;
    else
        i = b;

    while (1) {
        if (i % a == 0 && i % b == 0) {
            lcm = i;
            break;
        }
        i++;
    }

    printf("%d", lcm);

    return 0;
}

