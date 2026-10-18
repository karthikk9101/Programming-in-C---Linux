
#include <stdio.h>

int main()
{
    int a[100], n, i;
    int sum = 0, max, min;
    int *p;
    float avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
        return 1;

    printf("Enter elements:\n");

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    p = a;

    max = *p;
    min = *p;

    for (i = 0; i < n; i++)
    {
        sum += *(p + i);

        if (*(p + i) > max)
            max = *(p + i);

        if (*(p + i) < min)
            min = *(p + i);
    }

    avg = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);
    printf("Average = %.2f\n", avg);

    return 0;
}
