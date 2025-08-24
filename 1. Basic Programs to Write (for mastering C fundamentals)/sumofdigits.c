// Digit Summation: Given a three-digit number, write a program to calculate the sum of its digits.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number;
    printf("Enter number : ");
    scanf("%d", &number);
    int n1, n2, n3;
    n1 = number % 10;
    number -= n1;
    n2 = (number % 100) / 10;
    number -= n2 * 10;
    n3 = number / 100;

    int sum = n1 + n2 + n3;
    printf("Sum of digits = %d", sum);
    return 0;
}
