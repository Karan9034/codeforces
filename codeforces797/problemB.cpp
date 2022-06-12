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
#define double      long double
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
#define vvi         vector<vector<int>>
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


void karanel()
{
    int n, max_diff=INT_MIN; cin>>n;
    vi a(n);
    f(i, 0, n) cin>>a[i];
    vi b(n);
    f(i, 0, n){
        cin>>b[i];
        max_diff = max(max_diff, a[i]-b[i]);
    }
    f(i, 0, n){
        if(a[i]<b[i] || (a[i] - b[i] < max_diff && b[i]>0)){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int32_t main()
{
    fast
    test(t)
        karanel();
    return 0;
}