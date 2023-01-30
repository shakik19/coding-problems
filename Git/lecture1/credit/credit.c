#include <cs50.h>
#include <stdio.h>
int breakDown(int scnd2Last) ;
int main()
{
    long cardNum ;
    cardNum = get_long("Enter your card Number:") ;
    long card1 = cardNum ;
    int length = 0 ;

    do                      //Determining Card length
    {
        card1 = card1 / 10 ;
        length++ ;
    }
    while (card1 > 0) ;

    if (length != 13 && length != 15 && length != 16)       //Length varification
    {
        printf("INVALID\n") ;
        return 0 ;
    }

    long card2 = cardNum ;
    int last, scnd2Last ;
    int sum0 = 0, sum1 = 0;

    do                      //Digit separation starts
    {
        last = card2 % 10 ;         //last digit separating
        card2 = card2 / 10 ;              //eliminating the last digit after work is done
        sum0 += last ;              //sum of the last digit

        scnd2Last = card2 % 10 ;        //2nd to last digit separating
        card2 = card2 / 10 ;             //eliminating after work is done
        sum1 += breakDown(scnd2Last) ;   //solution in case the mul of 2nd to last digit is > 9
    }
    while (card2 > 0) ;

    int checkSum = sum0 + sum1 ;

    if (checkSum % 10 != 0)             //checkSum test
    {
        printf("INVALID\n") ;
        return 0 ;
    }
    //finding the 1st & 2nd  digit to determine weather it is Visa or MasterCard of same length
    int fst2Amex = cardNum / (1e13) ;
    int fst2Ms = cardNum / (1e14) ;
    int fst2Visa = cardNum / (1e15) ;
    //giving output, what type of card
    if (length == 15 && (fst2Amex == 34 || fst2Amex == 37))
    {
        printf("AMEX\n") ;
    }
    else if (length == 13)
    {
        printf("VISA\n") ;
    }
    else if (length == 16 && (50 < fst2Ms && fst2Ms < 56))
    {
        printf("MASTERCARD\n") ;
    }
    else if (length == 16 && (fst2Visa == 4))
    {
        printf("VISA\n") ;
    }
    else
    {
        printf("INVALID\n") ;
        return 0 ;
    }
}


int breakDown(scnd2Last)
{
    int x, a ;
    if (scnd2Last > 4)
    {
        a = (scnd2Last * 2) % 10 ;
        x = (1 + a) ;
        return x ;
    }
    else
    {
        return (scnd2Last * 2) ;
    }
}