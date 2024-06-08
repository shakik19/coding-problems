#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("Total %i coins\n", coins);
    printf("Quarter = %i\n", quarters) ;
    printf("Dime = %i\n", dimes) ;
    printf("Nickel = %i\n", nickels) ;
    printf("Penny = %i\n", pennies) ;
}

int get_cents(void)
{
    // TO DO
    int cents ;
    do
    {
        cents = get_int("Cents owed:") ;
    }
    while (cents < 0) ;
    return cents ;
}

int calculate_quarters(int cents)
{
    // TODO
    int qcount = 0 ;

    while (cents >= 25)
    {
        cents = cents - 25 ;
        qcount++ ;
    }

    return qcount;
}

int calculate_dimes(int cents)
{
    // TODO
    int dcount = 0 ;

    while (cents >= 10)
    {
        cents = cents - 10 ;
        dcount++ ;
    }

    return dcount ;
}

int calculate_nickels(int cents)
{
    // TODO
    int ncount = 0 ;

    while (cents >= 5)
    {
        cents = cents - 5 ;
        ncount++ ;
    }

    return ncount;
}

int calculate_pennies(int cents)
{
    // TODO
    int pcount = 0 ;

    while (cents >= 1)
    {
        cents = cents - 1 ;
        pcount++ ;
    }

    return pcount;
}
