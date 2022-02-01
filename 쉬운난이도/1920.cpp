#include <iostream>
#include <algorithm>
using namespace std;
int N,M;
int v[100001];
void solution(int num)
{
    int start = 0, end = N - 1 ,mid;
    while(end >= start){
        mid = (start + end) / 2;
        if (v[mid] == num)
        {
            cout << 1 << '\n';
            return;
        }
        else if (v[mid] > num)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    cout << 0 << '\n';
    return;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0); 
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> v[i];
    }
    sort(v,v + N);
    cin >> M;
    int k;
    for(int i = 0; i < M; i++)
    {
        cin >> k;
        solution(k);
    }

}
