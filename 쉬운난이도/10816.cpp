#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int N,M,k;
    cin >> N;
    while(N--)
    {
        cin >> k;
        v.push_back(k);
    }
    sort(v.begin(), v.end());
    cin >> M;
    while(M--)
    {
        cin >> k;
        auto low = lower_bound(v.begin(),v.end(),k);
        auto upp = upper_bound(v.begin(),v.end(),k);
        if(low != v.end())
        {
            cout << upp - low << ' ';
        }
        else cout << 0 << ' ';
    }
}