
#include <stdio.h>

void reverse(int a[], int x, int y)
{
    int temp;

    while (x < y)
    {
        temp = a[x];
        a[x] = a[y];
        a[y] = temp;

        x++;
        y--;
    }
}

int main()
{
    int a[100], n, k, i;
    char dir;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
        return 1;

    printf("Enter elements:\n");

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter rotation count: ");
    scanf("%d", &k);

    if (k < 0)
    {
        printf("Invalid rotation count\n");
        return 1;
    }

    k = k % n;

    printf("Enter direction (L/R): ");
    scanf(" %c", &dir);

    if (dir == 'L' || dir == 'l')
    {
        reverse(a, 0, k - 1);
        reverse(a, k, n - 1);
        reverse(a, 0, n - 1);
    }
    else if (dir == 'R' || dir == 'r')
    {
        reverse(a, 0, n - 1);
        reverse(a, 0, k - 1);
        reverse(a, k, n - 1);
    }
    else
    {
        printf("Invalid direction\n");
        return 1;
    }

    printf("Rotated array: ");

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");

    return 0;
}
