
#include <stdio.h>

int compare(char a[], char b[])
{
    int i = 0;

    while (a[i] != '\0' && b[i] != '\0')
    {
        if (a[i] != b[i])
            return a[i] - b[i];

        i++;
    }

    return a[i] - b[i];
}

void swap(char a[], char b[])
{
    char temp[100];
    int i;

    for (i = 0; i < 100; i++)
    {
        temp[i] = a[i];
        a[i] = b[i];
        b[i] = temp[i];

        if (temp[i] == '\0' && a[i] == '\0' && b[i] == '\0')
            break;
    }
}

int main()
{
    char names[50][100];
    int n, i, j;

    printf("Enter number of names: ");
    scanf("%d", &n);

    if (n < 1 || n > 50)
        return 1;

    for (i = 0; i < n; i++)
    {
        printf("Enter name %d: ", i + 1);
        scanf(" %99[^\n]", names[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (compare(names[j], names[j + 1]) > 0)
                swap(names[j], names[j + 1]);
        }
    }

    printf("Names in alphabetical order:\n");

    for (i = 0; i < n; i++)
        printf("%s\n", names[i]);

    return 0;
}
