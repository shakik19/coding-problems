#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    string text = argv[1];
    int countAlpha[26] ={0}, count = 0, i;
    char c;
    int length = strlen(text);
    for(i = 0; i < length; i++)
    {
        if(isalpha(text[i]))
        {
            c = tolower(text[i]);
            int index = (c - 'a');
            countAlpha[index]++;
            count++;
        }
    }

    printf("%-8s%-8s%-8s", "Letter", "Count", "Percentage");
    printf("\n");

    for(i = 0; i < 25; i++)
    {
        printf("_");
    }
    printf("\n");

    float perc[26];

    for(i = 0; i < 26; i++)
    {
        perc[i] = ((double)countAlpha[i] / count) * 100;
        printf("%-8c%-8i%-8.2f\n", ('a' + i), countAlpha[i], perc[i]);
    }
}