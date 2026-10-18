
#include <stdio.h>

int my_strlen(char s[])
{
    int i = 0;

    while (s[i] != '\0')
        i++;

    return i;
}

void my_strcpy(char dest[], char src[])
{
    int i = 0;

    while ((dest[i] = src[i]) != '\0')
        i++;
}

int my_strcmp(char a[], char b[])
{
    int i = 0;

    while (a[i] == b[i] && a[i] != '\0')
        i++;

    return (unsigned char)a[i] - (unsigned char)b[i];
}

void my_strcat(char dest[], char src[])
{
    int i = my_strlen(dest);
    int j = 0;

    while ((dest[i++] = src[j++]) != '\0')
        ;
}

int main()
{
    char a[200], b[100], copy[200];
    int choice;

    printf("1. Length\n");
    printf("2. Copy\n");
    printf("3. Compare\n");
    printf("4. Concatenate\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Enter string: ");
            scanf(" %199[^\n]", a);
            printf("Length = %d\n", my_strlen(a));
            break;

        case 2:
            printf("Enter source string: ");
            scanf(" %99[^\n]", b);
            my_strcpy(copy, b);
            printf("Copied string = %s\n", copy);
            break;

        case 3:
            printf("Enter first string: ");
            scanf(" %99[^\n]", a);
            printf("Enter second string: ");
            scanf(" %99[^\n]", b);

            if (my_strcmp(a, b) == 0)
                printf("Strings are equal\n");
            else
                printf("Strings are different\n");
            break;

        case 4:
            printf("Enter first string: ");
            scanf(" %99[^\n]", a);
            printf("Enter second string: ");
            scanf(" %99[^\n]", b);

            my_strcat(a, b);
            printf("Concatenated string = %s\n", a);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
