
#include <stdio.h>

int main()
{
    int a[10][10], m, n, i, j;
    int sum, maxRowSum, maxColSum;
    int maxRow = 0, maxCol = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    if (m < 1 || m > 10 || n < 1 || n > 10)
        return 1;

    printf("Enter matrix elements:\n");

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    maxRowSum = 0;

    for (i = 0; i < m; i++)
    {
        sum = 0;

        for (j = 0; j < n; j++)
            sum += a[i][j];

        printf("Row %d sum = %d\n", i + 1, sum);

        if (i == 0 || sum > maxRowSum)
        {
            maxRowSum = sum;
            maxRow = i;
        }
    }

    maxColSum = 0;

    for (j = 0; j < n; j++)
    {
        sum = 0;

        for (i = 0; i < m; i++)
            sum += a[i][j];

        printf("Column %d sum = %d\n", j + 1, sum);

        if (j == 0 || sum > maxColSum)
        {
            maxColSum = sum;
            maxCol = j;
        }
    }

    printf("Row with maximum sum = %d\n", maxRow + 1);
    printf("Maximum row sum = %d\n", maxRowSum);

    printf("Column with maximum sum = %d\n", maxCol + 1);
    printf("Maximum column sum = %d\n", maxColSum);

    return 0;
}
