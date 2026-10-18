
#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
        swap(&a, &b);

    if (a > c)
        swap(&a, &c);

    if (b > c)
        swap(&b, &c);

    printf("Ascending order: %d %d %d\n", a, b, c);

    return 0;
}
