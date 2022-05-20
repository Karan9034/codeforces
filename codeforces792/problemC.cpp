#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

#define test(t)     int t; cin >> t; while(t--)
#define f(i, a, b)  for(int i = a; i < b; i++)
#define endl        "\n"
#define deb(x)      cout << #x << ": " << x << endl;
#define fast        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*
-----------------------------------------------
    Target      :   Master
    Author      :   Karan Agrawal
    GitHub      :   Karan9034
    Codeforces  :   karanel
    About       :   Someone who hates competetive programming.
-----------------------------------------------
*/

void karanel()
{
    int n, m;
    cin>>n>>m;
    vector<vector<int>> arr(n, vector<int>(m));
    f(i, 0, n){
        f(j, 0, m){
            cin >> arr[i][j];
        }
    }
    vector<int> bad;
    for(int i=0; i<n && bad.empty(); i++) {
        vector<int> s_arr = arr[i];
        sort(s_arr.begin(), s_arr.end());
        for (int j=0; j<m; j++) {
            if (arr[i][j] != s_arr[j]) bad.push_back(j);
        }
    }
    if(bad.size() == 0){
        cout<<1<<" "<<1<<endl;
        return;
    }
    if(bad.size()>2){
        cout<<-1<<endl;
        return;
    }
    f(i, 0, n){
        swap(arr[i][bad[0]], arr[i][bad[1]]);
    }
    f(i, 0, n){
        f(j, 1, m){
            if(arr[i][j]<arr[i][j-1]){
                cout<<-1<<endl;
                return;
            }
        }
    }
    cout<<bad[0]+1<<" "<<bad[1]+1<<endl;
}

int main()
{
    fast;
    test(t)
        karanel();
    return 0;
}