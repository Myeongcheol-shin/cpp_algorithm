#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,k;
    int arr[501][501];
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cin >> k;
            arr[i][j] = k;
        }
    }
    while(N > 1)
    {
        N--;
        for(int i = 0; i <= N - 1; i++)
        {
            arr[N-1][i] += max(arr[N][i], arr[N][i + 1]);
        }
    }
    cout << arr[0][0];
}