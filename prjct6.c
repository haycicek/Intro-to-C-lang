/* (Recursive Exponentiation) Write a recursive function power(base, exponent) that when
invoked returns:

baseexponent

For example, power(3, 4) = 3 * 3 * 3 * 3. Assume that exponent is an integer greater than
or equal to 1.

Hint: The recursion step would use the relationship:

baseexponent = base * baseexponent-1

The terminating condition occurs when exponent is equal to 1 since base1 = base

Use the function in a complete program.*/
#include <stdio.h>
int power(int n1, int n2);
int main() {
    int base, a, result;
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &a);
    result = power(base, a);
    printf("%d", result);
    return 0;
}

int power(int base, int a) {
    if (a != 0)
        return (base * power(base, a - 1));
    else
        return 1;
}