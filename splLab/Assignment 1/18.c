#include <stdio.h>

int isPrime(int);

int main(void)
{
    int n;
    scanf("%d", &n);

    if (isPrime(n))
        printf("Prime\n");
    else
        printf("Not prime\n");
}

int isPrime(int x)
{
    if (x == 2)
        return 1;
    else if (x <= 1)
        return 0;
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