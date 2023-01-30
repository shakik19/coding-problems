#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int mat[n][n],
        sumL = 0,
        sumR = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
            if((i + j) == (n - 1))
            {
                sumR += mat[i][j];
            }
        }
        sumL += mat[i][i];
    }
    cout << abs(sumL - sumR) << endl;
    return 0;
}