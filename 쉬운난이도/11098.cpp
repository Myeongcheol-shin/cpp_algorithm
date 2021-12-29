#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, p;
    cin >> n;
    while(n--)
    {
        cin >> p;
        vector <pair<int, string>> s(p);
        int i = 0, biggest = 0, temp = 0;
        while(p--)
        {
            cin >> s[i].first >> s[i].second;
            if (biggest < s[i].first)
            {
                temp = i;
                biggest = s[i].first;
            }
            i++;
        }
        cout << s[temp].second << endl;
    }
}