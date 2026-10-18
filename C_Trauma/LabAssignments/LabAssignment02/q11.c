
#include <stdio.h>

int isPrime(int n)
{
    int i;

    if (n < 2)
        return 0;

    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int a[100], n, i, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
        return 1;

    printf("Enter elements:\n");

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Prime numbers: ");

    for (i = 0; i < n; i++)
    {
        if (isPrime(a[i]))
        {
            printf("%d ", a[i]);
            count++;
        }
        else{
            printf("None.");
            break;
        }
    }

    printf("\nTotal prime elements = %d\n", count);

    return 0;
}
