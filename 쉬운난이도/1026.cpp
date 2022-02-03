#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, add, tmp;
    cin >> N;
    int A[N], B[N], cpy_B[N];

    for (int i = 0; i < N; i++)
    {
        cin >> add;
        A[i] = add;
    }
    for (int i = 0; i < N; i++)
    {
        cin >> add;
        B[i] = add;
        cpy_B[i] = add;
    }

    for (int i = 0; i < N-1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if(A[i] > A[j]){
                tmp = A[i];
                A[i] = A[j];
                A[j] = tmp;
            }
        }
    }
    
    for (int i = 0; i < N-1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if(B[i] > B[j]){
                tmp = B[i];
                B[i] = B[j];
                B[j] = tmp;
            }
        }
    }

    int ans = 0;
    for(int i = 0; i < N; i++)
    {   
        ans += (A[i] * B[N - i - 1]);
    }
    cout << ans;
    return 0;
}