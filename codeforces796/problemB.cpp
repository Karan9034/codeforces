#include <bits/stdc++.h>
using namespace std;

/*
-----------------------------------------------
    Target      :   Master
    Author      :   Karan Agrawal
    GitHub      :   Karan9034
    Codeforces  :   karanel
    About       :   Someone who hates competetive programming.
-----------------------------------------------
*/

#define int         long long int
#define M_PI        3.14159265358979323846
#define test(t)     int t; cin >> t; while(t--)
#define f(i, a, b)  for(int i = a; i < b; i++)
#define fr(it, arr) for(auto it=arr.begin(); it!=arr.end(); it++)
#define endl        "\n"
#define deb(x)      cout << #x << ": " << x << endl;
#define fast        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define precise(n)  fixed<<setprecision(n)
#define all(v)      v.begin(), v.end()
#define vi          vector<int>
#define pii         pair<int, int>
#define vpii        vector<pair<int,int>>


template <typename T1, typename T2>
struct sortFirst {
    typedef pair<T1, T2> type;
    bool operator ()(type const& a, type const& b) const {
        return (a.first > b.first);
    }
};

template <typename T1, typename T2>
struct sortSecond {
    typedef pair<T1, T2> type;
    bool operator ()(type const& a, type const& b) const {
        return (a.second > b.second);
    }
};

int pow4max(int x){
    int v=1;
    while(x%4==0){
        x/=2;
        v++;
    }
    return v;
}


void karanel()
{
    int n;
    cin>>n;
    vi arr(n);
    f(i, 0, n) cin>>arr[i];
    int ans=0, odd=0;
    vi even;
    f(i, 0, n){
        if(arr[i] & 1) odd++;
        else{
            if(arr[i]%2==0 && arr[i]%4!=0){
                ans++;
                odd++;
            }
            else even.push_back(arr[i]);
        }
    }
    if(odd>0){
        cout<<ans+even.size()<<endl;
        return;
    }
    ans=INT_MAX;
    f(i, 0, even.size()){
        ans = min(ans, pow4max(even[i]));
    }
    cout<<ans+even.size()-1<<endl;
}

int32_t main()
{
    fast
    test(t)
        karanel();
    return 0;
}