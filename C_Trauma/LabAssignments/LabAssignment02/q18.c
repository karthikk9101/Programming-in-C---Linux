
#include <stdio.h>

int maximum(int a[], int n)
{
    int max = a[0];
    int i;

    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }

    return max;
}

int minimum(int a[], int n)
{
    int min = a[0];
    int i;

    for (i = 1; i < n; i++)
    {
        if (a[i] < min)
            min = a[i];
    }

    return min;
}

float average(int a[], int n)
{
    int sum = 0;
    int i;

    for (i = 0; i < n; i++)
        sum += a[i];

    return (float)sum / n;
}

int main()
{
    int a[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
        return 1;

    printf("Enter elements:\n");

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Maximum = %d\n", maximum(a, n));
    printf("Minimum = %d\n", minimum(a, n));
    printf("Average = %.2f\n", average(a, n));

    return 0;
}
