//C++ program to differentiate triplets
#include <iostream>

using namespace std;

int compareTripletsA(int arrA[], int arrB[]);
int compareTripletsB(int arrA[], int arrB[]);
int main()
{
    int arrA[3],
        arrB[3],
        i = 0,
        j = 0;
    while (i < 3)
    {
        cin >> arrA[i];
        i++;
    }
    while (j < 3)
    {
        cin >> arrB[j];
        j++;
    }

    /*int a = 0,
        b = 0;
    for (int i = 0; i < 3; i++)
    {
        if (arrA[i] > arrB[i])
        {
            a++;
        }
        else if (arrB[i] > arrA[i])
        {
            b++;
        }
        else
        {
            continue;
        }
    }*/

    int alice = compareTripletsA(arrA, arrB);
    int bob = compareTripletsB(arrA, arrB);
    cout << alice << ' ' << bob << endl;
    /*cout << a << ' ' << b << endl;*/
    return 0;
}

int compareTripletsA(int arrA[], int arrB[])
{
    int a = 0;
    for (int i = 0; i < 3; i++)
    {
        if (arrA[i] > arrB[i])
            a++;
        else
            continue;
    }
    return a;
}
int compareTripletsB(int arrA[], int arrB[])
{
    int b = 0;

    for (int i = 0; i < 3; i++)
    {
        if (arrA[i] < arrB[i])
            b++;
        else
            continue;
    }
    return b;
}