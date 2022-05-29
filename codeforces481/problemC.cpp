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

// ll lowerBound(vector<ll> arr, ll x){
//     ll l=-1, r=arr.size();
//     while(l+1<r){
//         ll mid = (l+r)/2;
//         if(arr[mid]>=x){
//             r=mid;
//         }else{
//             l=mid;
//         }
//     }
//     return r;
// }

void karanel()
{
    ll n, m, sum=0, cache=1, val;
    cin>>n>>m;
    vector<ll> dorm(n);
    vector<ll> arr(n+1);
    arr[0] = 0;
    f(i, 0, n) {
        cin>>dorm[i];
        sum+=dorm[i];
        arr[i+1] = sum;
    }
    f(i, 0, m) {
        cin>>val;
        // ll j = lowerBound(arr, letters[i]);
        // cout<<j<<" "<<letters[i]-arr[j-1]<<endl;
        for(; cache<=m; cache++){
            if(arr[cache]>=val){
                cout<<cache<<" "<<val-arr[cache-1]<<endl;
                break;
            }
        }
    }
}

int main()
{
    fast;
    // test(t)
        karanel();
    return 0;
}