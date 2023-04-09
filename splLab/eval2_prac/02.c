#include <stdio.h>

void func(char character);

int main(void)
{
    char c;
    scanf("%c", &c);
    func(c);
}

void func(char character)
{
    printf("Value received from main: %c\n", character);
}