/*(Multiples) Write a function isMultiple that determines for a pair of integers whether the
second integer is a multiple of the first. The function should take two integer arguments and return
1 (true) if the second is a multiple of the first, and 0 (false) otherwise. Use this function in a program
that inputs a series of pairs of integers.
*/
#include <stdio.h>

int isMultiple(int m, int n)
{
    if ((m % n) == 0)
        return 1;
    else
        return 0;
}

int main(void)
{
    int i, j, count = 0;
    while (count < 10)
    {
        printf("Enter two integers: ");
        scanf("%i %i", &i, &j);
        count++;
        if (isMultiple(i, j))
            printf("%i is a multiple of %i\n", i, j);
        else
            printf("%i is not a multiple of %i\n", i, j);
    }
    return 0;
}