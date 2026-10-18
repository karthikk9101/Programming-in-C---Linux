
#include <stdio.h>

char toLower(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        return ch + 32;

    return ch;
}

int isAlphaNumeric(char ch)
{
    return (ch >= 'A' && ch <= 'Z') ||
           (ch >= 'a' && ch <= 'z') ||
           (ch >= '0' && ch <= '9');
}

int palindrome(char str[])
{
    int start = 0, end = 0;

    while (str[end] != '\0')
        end++;

    end--;

    while (start < end)
    {
        while (start < end && !isAlphaNumeric(str[start]))
            start++;

        while (start < end && !isAlphaNumeric(str[end]))
            end--;

        if (toLower(str[start]) != toLower(str[end]))
            return 0;

        start++;
        end--;
    }

    return 1;
}

int main()
{
    char str[200];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    if (palindrome(str))
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}
