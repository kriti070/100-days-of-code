//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum = %d\n" ,a+b);
    printf("difference = %d\n" ,a-b);
    printf("product = %d\n",a*b);
    printf("qoutient = %d\n",a/b);

    return 0;
}