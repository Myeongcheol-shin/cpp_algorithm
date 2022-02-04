#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cnt, N;
    bool check;
    string s;
    cin >> N;

    while(N--)
    {   
        cnt = 0;
        check = true;
        cin >> s;
        for(int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
            {
                cnt++;
            }
            else{
                if(cnt > 0)
                {
                    cnt--;
                }
                else{
                    check = false;
                    break;
                }
            }
        }
        if(check && cnt == 0)
        {
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }
    
}