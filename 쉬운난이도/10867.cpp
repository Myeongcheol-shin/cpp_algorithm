#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,k,tmp;
    set<int> s;
    cin >> N;
    while(N--)
    {
        cin >> k;
        s.insert(k);
    }
    vector<int> v(s.begin(), s.end());

    for(int i = 0; i < v.size() - 1; i++)
    {
        for(int j = i+1; j < v.size(); j++)
        {
            if(v[i] > v[j])
            {
                tmp = v[i];
                v[i] = v[j];
                v[j] = tmp;
            }
        }
    }
    for (auto it = v.begin(); it != v.end(); it++){
        cout << *it << ' ';
    }
}