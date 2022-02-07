#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    int N, k, ans = 0;
    cin >> N;
    while(N--)
    {
        cin >> k;
        pq.push(k);
    }

    if (N == 1)
    {
        cout << pq.top();
    }
    else
    {
        int a, b;
        while(pq.size() > 1)
        {
            a = pq.top();
            pq.pop();
            b = pq.top();
            pq.pop();
            ans += (a + b);
            pq.push(a + b);
        }
        cout << ans;
    }
}