
#include <stdio.h>

int main()
{
    char str[300], longest[100], shortest[100];
    char word[100];
    int i = 0, j, len;
    int count = 0, maxLen = 0, minLen = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
            i++;

        if (str[i] == '\0')
            break;

        j = 0;

        while (str[i] != '\0' && str[i] != ' ' &&
               str[i] != '\n' && str[i] != '\t')
        {
            if (j < 99)
                word[j++] = str[i];

            i++;
        }

        word[j] = '\0';
        len = j;
        count++;

        if (count == 1 || len > maxLen)
        {
            maxLen = len;
            for (j = 0; j <= len; j++)
                longest[j] = word[j];
        }

        if (count == 1 || len < minLen)
        {
            minLen = len;
            for (j = 0; j <= len; j++)
                shortest[j] = word[j];
        }
    }

    printf("Number of words = %d\n", count);

    if (count > 0)
    {
        printf("Longest word = %s\n", longest);
        printf("Length of longest word = %d\n", maxLen);
        printf("Shortest word = %s\n", shortest);
        printf("Length of shortest word = %d\n", minLen);
    }

    return 0;
}
