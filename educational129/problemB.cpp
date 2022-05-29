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
    ll n, m, ind = 0;
    cin>>n;
    vector<ll> a(n);
    f(i, 0, n){
        cin>>a[i];
    }
    cin>>m;
    vector<ll> b(m);
    f(i, 0, m){
        cin>>b[i];
        ind += b[i];
    }
    ind %= n;
    cout<<a[ind]<<endl;
}

int main()
{
    fast;
    test(t)
        karanel();
    return 0;
}