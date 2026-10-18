
#include <stdio.h>

void analyse(int a[], int n,
             int *max, int *min,
             int *sum, float *avg)
{
    int i;

    *max = a[0];
    *min = a[0];
    *sum = 0;

    for (i = 0; i < n; i++)
    {
        *sum += a[i];

        if (a[i] > *max)
            *max = a[i];

        if (a[i] < *min)
            *min = a[i];
    }

    *avg = (float)(*sum) / n;
}

int main()
{
    int a[100], n, i;
    int max, min, sum;
    float avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
        return 1;

    printf("Enter elements:\n");

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    analyse(a, n, &max, &min, &sum, &avg);

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
