#include <stdio.h>
int reverse (int binDigit)
{
    int remainder
}

void convert(int decimal)
{
    int binary, remDec;
    printf("The Binary number of entered decimal is: ");
    while(decimal > 0)
    {
        binary = decimal % 2;
        decimal /= 2;
        printf("%i", binary);
    }
    printf("\n");
}

int main()
{
    int decimal; scanf("%d", &decimal);
    convert(decimal);
    return 0;
}