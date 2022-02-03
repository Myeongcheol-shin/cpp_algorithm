#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0); 
    string e;
    cin >> e;
    int N = e.size(), M;
    cin >> M;
    list<char> l(e.begin(), e.end());
    auto it = l.end();
    char command, word;
    for (int i = 0; i < M; i++)
    {
        cin >> command;
        if(command == 'P')
        {
            cin >> word;
            l.insert(it,word);
        }
        else if(command == 'L')
        {
            if(it != l.begin()) it--;
        }
        else if(command == 'D')
        {
            if(it != l.end()) it++;
        }
        else if(command == 'B')
        {
            if(it != l.begin()) {
                it = l.erase(--it);
            }
        }
    }
    for(auto w = l.begin(); w != l.end(); w++)
    {
        cout << *w;
    }
}