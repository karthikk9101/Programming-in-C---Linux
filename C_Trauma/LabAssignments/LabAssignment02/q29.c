
#include <stdio.h>

int main()
{
    int a[10][10], n, i, j;
    int mainSum = 0, secSum = 0, boundarySum = 0;
    int aboveSum = 0, belowSum = 0;

    printf("Enter order of matrix: ");
    scanf("%d", &n);

    if (n < 1 || n > 10)
        return 1;

    printf("Enter matrix elements:\n");

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
                mainSum += a[i][j];

            if (i + j == n - 1)
                secSum += a[i][j];

            if (i == 0 || i == n - 1 ||
                j == 0 || j == n - 1)
                boundarySum += a[i][j];

            if (i < j)
                aboveSum += a[i][j];

            if (i > j)
                belowSum += a[i][j];
        }
    }

    printf("Main diagonal sum = %d\n", mainSum);
    printf("Secondary diagonal sum = %d\n", secSum);
    printf("Boundary sum = %d\n", boundarySum);
    printf("Above main diagonal sum = %d\n", aboveSum);
    printf("Below main diagonal sum = %d\n", belowSum);

    return 0;
}
