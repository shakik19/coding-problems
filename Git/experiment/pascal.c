#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int ht, row, col;

    do // Taking N
    {
        ht = get_int("Height: ");
    } while (1 > ht || ht > 8); // Conditions of N

    for (col = 1; col <= ht; col++) // Column loop
    {
        for (row = ht - 1; row >= col; row--)
        {
            printf(" ");
        }
        for (row = 1; row <= col; row++)
        {
            printf("%i ", col);
        }

        printf("\n");
    }
}