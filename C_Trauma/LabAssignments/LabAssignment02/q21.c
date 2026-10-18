
#include <stdio.h>

void reverse(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    while (*end != '\0' && *end != '\n')
        end++;

    end--;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    reverse(str);

    printf("Reversed string: %s", str);

    return 0;
}
