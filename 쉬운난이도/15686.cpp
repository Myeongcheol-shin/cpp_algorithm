#include <bits/stdc++.h>
using namespace std;
int N, M, k, distance = 101, cal;
vector<pair<int, int>> v_house, c_house;
int main()
{
    cin >> N >> M;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cin >> k;
            if(k == 1) v_house.push_back(make_pair(i,j));
            else if(k == 2) c_house.push_back(make_pair(i,j));
        }
    }
    vector<int> n;
    for(int i = 0; i < M; i++)
    {
        n.push_back(1);
    }
    for(int j = 0; j < c_house.size() - M; j++)
    {
        n.push_back(0);
    }
    sort(n.begin(),n.end());

    int ans=INT_MAX, sum=0;
    do{
        vector<pair<int,int>> b;
        sum = 0;
        for(int i = 0; i < n.size(); i++){
            if(n[i] == 1){
                b.push_back({c_house[i].first, c_house[i].second});
            }
        }

        for(int i = 0; i < v_house.size(); i++){
            int len, min_len = INT_MAX;
            int x = v_house[i].first, y = v_house[i].second;
            for(int j = 0; j < M; j++)
            {
                len = abs(b[j].first - x) + abs(b[j].second - y);
                min_len = min(len, min_len);
            }
            sum += min_len;
        }
        ans = min(ans,sum);
    } while(next_permutation(n.begin(), n.end()));
    cout << ans;
}