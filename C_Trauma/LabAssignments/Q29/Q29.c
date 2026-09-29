#include <stdio.h>

#define VALUE 0x0A0B0C0D

int main()
{
    unsigned int x=VALUE;
    unsigned int temp=x;
    unsigned int reversed=0;
    int count=0;
    int i;
    int power_two=0;

    /* Count the number of set bits */
    while(temp!=0)
    {
        count += temp & 1;
        temp >>= 1;
    }

    /* Reverse the 4 bytes */
    for(i=0;i<4;i++)
    {
        reversed <<= 8;
        reversed |= x & 0xFF;
        x >>= 8;
    }

    /* Check whether the original value is a power of two */
    temp=VALUE;

    if(temp!=0)
    {
        int bits=0;

        while(temp!=0)
        {
            if(temp & 1)
                bits++;

            temp >>= 1;
        }

        if(bits==1)
            power_two=1;
    }

    printf("Number of set bits = %d\n",count);
    printf("Original value     = 0x%08X\n",VALUE);
    printf("Reversed value     = 0x%08X\n",reversed);

    if(power_two)
        printf("Power of two       = Yes\n");
    else
        printf("Power of two       = No\n");

    return 0;
}