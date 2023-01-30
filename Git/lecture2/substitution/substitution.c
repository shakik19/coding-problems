#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

bool keyCheck(string key, int argc);
void replace(string plain, string key);

void main(int argc, string argv[])
{
    string k = argv[1];
    if (!keyCheck(k, argc))
    {
        return 1;
    }

    string plain = get_string("plaintext:  ");
    replace(plain, k);
}

bool keyCheck(string key, int argc)
{
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return false;
    }
    else if (strlen(key) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return false;
    }
    for (int i = 0; i < 26; i++)
    {
        if (!isalpha(key[i]))
        {
            printf("Key must contain only english alphabets\n");
            return false;
        }
    }
    // Checking weather any alpha in the arg is repeating itself
    int letterCounts[26] = {0}; // declaring an empty arr of 26 slots
    char c;
    for (int i = 0; i < 26; i++)
    {
        c = tolower(key[i]);
        // finding the indext of the arr to increment
        int index = c - 'a';
        letterCounts[index]++;
        // applying validity condition
        if (letterCounts[index] != 1)
        {
            printf("Key must not repeat any alphabet.\n");
            return false;
        }
    }

    return true;
}

void replace(string plain, string key)
{
    char c;
    int index;
    int length = strlen(plain);
    printf("ciphertext: ");
    for (int i = 0; i < length; i++)
    {
        // checking if the i indexed char of the plaintext alphabetic
        if (isalpha(plain[i]))
        {
            // in case of alphabetic, finding the index of cipher char and printing it
            if (isupper(plain[i]))
            {
                // index finding
                /*the ascii value difference between the same case of target char and 'A'
                is the index position of key for that char*/
                index = plain[i] - 'A';
                c = toupper(key[index]);

                printf("%c", c);
            }
            else
            {
                // same method as upper case
                index = plain[i] - 'a';
                c = tolower(key[index]);

                printf("%c", c);
            }
        }
        else
        {
            // if not alphabetic, printing the char without any changes
            printf("%c", plain[i]);
        }
    }
    printf("\n");
}