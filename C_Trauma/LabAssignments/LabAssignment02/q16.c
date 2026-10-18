
#include <stdio.h>

int main()
{
    int a[10][10], m, n, i, j, k;
    int rowMin, isSaddle, found = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    if (m < 1 || m > 10 || n < 1 || n > 10)
        return 1;

    printf("Enter matrix elements:\n");

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < m; i++)
    {
        rowMin = a[i][0];

        for (j = 1; j < n; j++)
        {
            if (a[i][j] < rowMin)
                rowMin = a[i][j];
        }

        for (j = 0; j < n; j++)
        {
            if (a[i][j] == rowMin)
            {
                isSaddle = 1;

                for (k = 0; k < m; k++)
                {
                    if (a[k][j] > rowMin)
                    {
                        isSaddle = 0;
                        break;
                    }
                }

                if (isSaddle)
                {
                    printf("Saddle point = %d\n", rowMin);
                    printf("Position = (%d, %d)\n", i + 1, j + 1);
                    found = 1;
                }
            }
        }
    }

    if (!found)
        printf("No saddle point found\n");

    return 0;
}
