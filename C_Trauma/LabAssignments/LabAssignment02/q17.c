
#include <stdio.h>

// Calculate digit sum recursively
int digitSum(int n)
{
    if (n == 0)
        return 0;

    return (n % 10) + digitSum(n / 10);
}

int main()
{
    int n, sum;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Enter a non-negative integer\n");
        return 1;
    }

    sum = digitSum(n);
    printf("Sum of digits = %d\n", sum);

    while (sum >= 10)
        sum = digitSum(sum);

    printf("Single digit result = %d\n", sum);

    return 0;
}
