#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

#define test(t)     int t; cin >> t; while(t--)
#define f(i, a, b)  for(ll i = a; i < b; i++)
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
    ll n, cnt=0;
    cin>>n;
    vector<ll> arr(n);
    f(i, 0, n){
        cin>>arr[i];
    }
    for(int i=n-1; i>0; i--){
        if(arr[i-1]>arr[i]){
            cnt++;
            i--;
        }
    }
    cout<<cnt<<endl;
}

int main()
{
    fast;
    test(t)
        karanel();
    return 0;
}