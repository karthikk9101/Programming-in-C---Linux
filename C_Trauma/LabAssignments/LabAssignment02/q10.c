
#include <stdio.h>

int main()
{
    char str[200];
    int i;
    int upper = 0, lower = 0, digits = 0;
    int spaces = 0, vowels = 0, consonants = 0;
    int special = 0;

    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if (ch == '\n')
            break;

        if (ch >= 'A' && ch <= 'Z')
        {
            upper++;

            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
                vowels++;
            else
                consonants++;
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            lower++;

            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        else if (ch >= '0' && ch <= '9')
        {
            digits++;
        }
        else if (ch == ' ')
        {
            spaces++;
        }
        else
        {
            special++;
        }
    }

    printf("Uppercase letters = %d\n", upper);
    printf("Lowercase letters = %d\n", lower);
    printf("Digits = %d\n", digits);
    printf("Spaces = %d\n", spaces);
    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    printf("Special characters = %d\n", special);

    return 0;
}
