#include <iostream>
#include <vector>
using namespace std;

int main(){
    int m, n, i, sum = 0,k;
    vector<int> v;

    cin >> m;
    cin >> n;
    for(i = 0; i <= 100; i++)
    {
        k = i * i;
        
        if(k >= m and k <= n)
        {
            v.push_back(k);
        }
        if(k > n)
        {
            break;
        }
    }
    for (i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }

    if (v.size() == 0)
    {
        cout << -1;
    }
    else
    {
        cout << sum << endl << v[0];
    }
}