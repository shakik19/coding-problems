#include <stdio.h>
#define r 3
#define c 5

void InputMatrix();
void ShowMatrix();
void ScalarMatrix(int scalar);

int arr[r][c];

int main(void)
{
    int scalar;
    InputMatrix();
    scanf("%d", &scalar);
    printf("The matrix was: \n");
    ShowMatrix();
    printf("\nThe new matrix is:\n");
    ScalarMatrix(scalar);
}

void InputMatrix()
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}

void ShowMatrix()
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void ScalarMatrix(int scalar)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j] * scalar);
        }
        printf("\n");
    }
}