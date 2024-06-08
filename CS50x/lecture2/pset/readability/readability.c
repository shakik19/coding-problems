#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

float count_letters(string s, int len);
float count_words(string s, int len);
float count_sentences(string s, int len);
int calculate_grade(float letters, float sentences, float words);

int main(void)
{
    string text = get_string("Text:");
    int len = strlen(text);
    float letters = count_letters(text, len);
    float words = count_words(text, len);
    float sentences = count_sentences(text, len);
    int index = calculate_grade(letters, sentences, words);
    /*printf("%i Letters\n", letters);
    printf("%i Words\n", words);
    printf("%i Sentences\n", sentences);*/
    if (index <= 0)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}

float count_letters(string s, int len) // Letter counting function
{
    float count = 0;
    for (int i = 0; i < len; i++)
    {
        if (isalpha(s[i]) > 0)
        {
            count++;
        }
    }
    return count;
}
float count_words(string s, int len) // Word counting function
{
    float count = 1;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == ' ') // Spaces seperate words
        {
            count++;
        }
    }
    return count;
}
float count_sentences(string s, int len) // Sentence counting function
{
    float count = 0;
    for (int i = 0; i < len; i++)
    {
        // '?','.' & '!' seperate sentences
        if (s[i] == '.' || s[i] == '?' || s[i] == '!')
        {
            count++;
        }
    }
    return count;
}
int calculate_grade(float letters, float sentences, float words)
{
    float l = 100 * (letters / words);
    float s = 100 * (sentences / words);
    float index = round(0.0588 * l - 0.296 * s - 15.8);
    return index;
}