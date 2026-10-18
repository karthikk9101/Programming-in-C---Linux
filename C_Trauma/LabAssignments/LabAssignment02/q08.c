
#include <stdio.h>

int search(int a[], int n, int x)
{
    int i, count = 0;

    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            printf("Position: %d\n", i + 1);
            count++;
        }
    }

    return count;
}

int main()
{
    int a[100], n, x, i, freq;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter value to search: ");
    scanf("%d", &x);

    freq = search(a, n, x);

    if (freq == 0)
        printf("Element not found\n");
    else
    {
        printf("Element found\n");
        printf("Frequency = %d\n", freq);
    }

    return 0;
}
