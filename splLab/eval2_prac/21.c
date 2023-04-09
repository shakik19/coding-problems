#include <stdio.h>
#include <math.h>

int TakeInput(int arr[], int n);
float CalcMean(int array[], int n);
float CalcStandardDeviation(int array[], int n, float mean);

int main(void)
{
    int n;
    scanf("%d", &n);
    int arr[n];

    TakeInput(arr, n);
    float mean = CalcMean(arr, n);
    float dev = CalcStandardDeviation(arr, n, mean);

    printf("%.2f", dev);
}

int TakeInput(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

float CalcMean(int array[], int n)
{
    int sum = 0;
    float mean = 0;
    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }

    mean = (float)sum / n;

    return mean;
}

float CalcStandardDeviation(int array[], int n, float mean)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += pow((array[i] - mean), 2);
    }
    float dev = sqrt((sum) / n);

    return dev;
}