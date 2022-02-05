#include <bits/stdc++.h>
using namespace std;
vector<int> trees;
vector<int> tree_dist;
int Euclid(int a, int b)
{
    int r = a % b;
    if(r == 0)
        return b;
    else
        return Euclid(b,r);
}

int main(){
    int N, gcd, k;
    int count = 0;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> k;
        trees.push_back(k);
    }

    sort(trees.begin(), trees.end());

    for(int i = 0; i < N - 1; i++)
    {
        tree_dist.push_back(trees[i+1] - trees[i]);
    }

    gcd = tree_dist[0];
    for(int i = 1; i < N - 1; i++){
        gcd = Euclid(gcd,tree_dist[i]);
    }
    for(int i = 0; i < N - 1; i++)
    {
        count += (tree_dist[i] / gcd) - 1;
    }
    cout << count;

}