#include <bits/stdc++.h>
using namespace std;

int N,M,k;
vector<int> arr;

void solution(int num)
{
    int start = 0, end = N - 1, mid;
    while(end >= start)
    {
        mid = (start + end) / 2;
        if(arr[mid] == num){
            cout << 1 << ' ';
            return;
        }
        else if(arr[mid] > num){
            end = mid - 1;
        }
        else{
            start = start + 1;
        }
    }
    cout << 0 << ' ';
    return;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0); 
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> k;
        arr.push_back(k);
    }
    sort(arr.begin(), arr.end());
    cin >> M;
    for(int i = 0; i < M; i++)
    {
        cin >> k;
        solution(k);
    }
}
