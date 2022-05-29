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
    int n;
    cin>>n;
    vector<int>arr(n);
    vector<int> ans;
    f(i, 0, n){
        cin>>arr[i];
    }
    for(int i=n-1; i>=0; i--){
        if(find(ans.begin(), ans.end(), arr[i]) != ans.end()){
            continue;
        }
        ans.push_back(arr[i]);
    }
    cout<<ans.size()<<endl;
    for(int i=ans.size()-1; i>=0; i--){
        cout<<ans[i]<<" ";
    }
}

int main()
{
    fast;
    // test(t)
        karanel();
    return 0;
}