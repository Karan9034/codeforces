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

template <typename T1, typename T2>
struct less_second {
    typedef pair<T1, T2> type;
    bool operator ()(type const& a, type const& b) const {
        return (a.second > b.second);
    }
};

void karanel()
{
    ll n;
    cin>>n;
    vector<ll> arr(n);
    map<ll, ll> mp;
    f(i, 0, n){
        cin>>arr[i];
        if(arr[i]%3==0){
            ll tmp = arr[i];
            while(tmp%3==0){
                mp[arr[i]]++;
                tmp /= 3;
            }
        }else{
            mp[arr[i]] = 0;
        }
    }
    vector<pair<ll, ll>> vpp(mp.begin(), mp.end());
    sort(vpp.begin(), vpp.end(), less_second<ll, ll>());

    for(auto it=vpp.begin(); it!=vpp.end(); it++){
        cout<<it->first<<" ";
    }

}

int main()
{
    fast;
    // test(t)
        karanel();
    return 0;
}