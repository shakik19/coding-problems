#include <stdio.h>
#include <string.h>

int find_substr(char str1[], char str2[]);

int main(void)
{
    char str1[200], str2[100];
    gets(str1);
    gets(str2);

    if (find_substr(str1, str2))
        printf("1\n");
    else
        printf("0\n");
    return 0;
}

int find_substr(char str1[], char str2[])
{
    int len1 = strlen(str1), len2 = strlen(str2);

    for (int i = 0; i < len1; i++)
    {
        int temp = i, temp1 = 0;
        if (str2[0] == str1[i])
        {
            temp1++;
            for (int j = 1; j < len2; j++)
            {
                temp++;
                if (str2[j] == str1[temp])
                {
                    temp1++;
                }
            }
        }
        if (temp1 == len2)
        {
            return 1;
        }
    }
    return 0;
}