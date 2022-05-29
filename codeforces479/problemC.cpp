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
    ll n, k;
    cin>>n>>k;
    vector<ll> arr(n);
    f(i, 0, n){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    if(k==0 && arr[0]==1){
        cout<<-1<<endl;
    }else if(k==0){
        cout<<1<<endl;
    }else if(arr[k-1]==arr[k]){
        cout<<-1<<endl;
    }else{
        cout<<arr[k-1]<<endl;
    }
}

int main()
{
    fast;
    // test(t)
        karanel();
    return 0;
}