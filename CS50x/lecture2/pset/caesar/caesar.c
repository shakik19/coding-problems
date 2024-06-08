#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

bool argCheck(string x, int len);
char rotate(char text, int k);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // assigning the arg to a new string var
    string key = argv[1];
    int kLen = strlen(key); // determining arg length

    // checking the arg if it's a digit or not
    if (argCheck(key, kLen) == false)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Converting arg string to an int(The int key)
    int k = atoi(key);

    // Taking plainText input
    string text = get_string("plaintext:  ");

    // Alphabet rotating function
    int tLen = strlen(text);
    printf("ciphertext: ");
    for (int i = 0; i < tLen; i++)
    {
        char c = rotate(text[i], k);
        printf("%c", c);
    }
    printf("\n");
}

bool argCheck(string key, int len)
{
    for (int i = 0; i < len; i++)
    {
        if (isdigit(key[i]) == 0)
        {
            return false;
        }
    }
    return true;
}

char rotate(char text, int k)
{
    // alpha check
    if (isalpha(text))
    {
        char cipher;
        // case check
        if (isupper(text))
        {
            // Wrapping around
            if ((text + (k % 26)) > 90)
            {
                cipher = ((text + k % 26) - 90) + 'A' - 1;
                return cipher;
            }
            else
            {
                // cipher char doesn't exceed 'Z' so no need wrap around
                // same goes for lower
                return (text + k % 26);
            }
        }
        else
        {
            // plain to cipher convertion(lower case)
            // Wrapping around
            if ((text + k % 26) > 122)
            {
                cipher = ((text + k % 26) - 122) + 'a' - 1;
                return cipher;
            }
            else
            {
                return (text + k % 26);
            }
        }
    }
    else
    {
        return text;
    }
}