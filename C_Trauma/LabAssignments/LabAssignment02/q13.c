
#include <stdio.h>

int removeDup(int a[], int n)
{
    int i, j, k;

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; )
        {
            if (a[i] == a[j])
            {
                for (k = j; k < n - 1; k++)
                    a[k] = a[k + 1];

                n--;
            }
            else
            {
                j++;
            }
        }
    }

    return n;
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

    n = removeDup(a, n);

    printf("Array after removing duplicates: ");

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");

    return 0;
}
