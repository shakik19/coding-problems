#include <stdio.h>

void GeneratePrime(int);
int isPrime(int);

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("Prime less than %d: ", n);
    GeneratePrime(n);
    return 0;
}

void GeneratePrime(int prime)
{
    for (int i = 2; i < prime; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }
}

int isPrime(int x)
{
    if (x == 2)
        return 1;
    else
    {
        for (int i = 2; i < x; i++)
        {
            if (x % i == 0)
                return 0;
        }
        return 1;
    }
}