#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int row, col, ht ;

    do
    {
        ht = get_int("Enter Height:") ;
    }
    while (ht < 1 || ht > 8) ;

    for (col = 0 ; col < ht ; col++)      //Column making
    {

        for (row = ht - 1; row > col ; row--)  //Row making for space
        {
            printf(" ") ;
        }
        for (row = 0 ; row <= col ; row++)      //Row making for hash
        {
            printf("#") ;
        }

        printf("  ") ;      //Middle gap

        for (row = 0 ; row <= col ; row++)      //Row making for 2nd hash
        {
            printf("#") ;
        }
        printf("\n") ;
    }
}