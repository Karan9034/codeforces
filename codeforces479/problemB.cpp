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
    ll n, max=-1;
    string s;
    cin>>n;
    cin>>s;
    map<string, int> mp;
    f(i, 0, n-1){
        string ind = "";
        ind += s[i];
        ind += s[i+1];
        mp[ind]++;
    }
    string ans;
    for(auto it = mp.begin(); it!=mp.end(); it++){
        if(it->second > max){
            ans = it->first;
            max = it->second;
        }
    }
    cout<<ans<<endl;
}

int main()
{
    fast;
    // test(t)
        karanel();
    return 0;
}