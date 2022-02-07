#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,K;
    cin >> N >> K;
    int coin[N];
    int arr[100001];
    for(int i = 0; i < N; i++)
    {
        cin >> coin[i];
    }
    arr[0] = 1;
    for(int i = 0; i < N; i++)
    {
        for(int j = coin[i]; j <= K; j++)
        {
            arr[j] += arr[j - coin[i]];
        }
    }
    cout << arr[K];
}