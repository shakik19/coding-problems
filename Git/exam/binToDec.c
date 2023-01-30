#include <stdio.h>
int convert(int binary);
int main()
{
    int binary;
    scanf("%d", &binary);
    printf("Decimal value of Binary %i is %i\n", binary, (convert(binary)));
}

int convert(int binary)
{
    int sum = 0,
        mul = 1;
    while(binary > 0)
    {
        int remainder = binary % 10;
        sum += (mul * remainder);
        mul *= 2;
        binary /= 10;
    }
    return sum;
}