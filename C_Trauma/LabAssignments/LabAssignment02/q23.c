
#include <stdio.h>

char lower(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        return ch + 32;

    return ch;
}

int wordFrequency(char str[], char word[])
{
    int i = 0, j, count = 0, match;

    while (str[i] != '\0')
    {
        while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
            i++;

        if (str[i] == '\0')
            break;

        j = 0;
        match = 1;

        while (str[i + j] != '\0' &&
               str[i + j] != ' ' &&
               str[i + j] != '\n' &&
               str[i + j] != '\t')
        {
            if (word[j] == '\0' ||
                lower(str[i + j]) != lower(word[j]))
                match = 0;

            j++;
        }

        if (word[j] != '\0')
            match = 0;

        if (match)
            count++;

        i += j;
    }

    return count;
}

int main()
{
    char str[300], word[50];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the word to search: ");
    scanf("%49s", word);

    printf("Frequency = %d\n", wordFrequency(str, word));

    return 0;
}
