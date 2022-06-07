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
    int n, p1, p2, p3, t1, t2, ans=0;
    cin>>n>>p1>>p2>>p3>>t1>>t2;
    vi l(n);
    vi r(n);
    cin>>l[0]>>r[0];
    ans+=p1*(r[0]-l[0]);
    f(i, 1, n){
        cin>>l[i]>>r[i];
        if(l[i]-r[i-1]>t1+t2){
            ans += p1*t1 + p2*t2 + p3*(l[i]-r[i-1]-t1-t2) + p1*(r[i]-l[i]);
        }else if(l[i]-r[i-1]>t1){
            ans += p1*t1 + p2*(l[i]-r[i-1]-t1) + p1*(r[i]-l[i]);
        }else{
            ans += p1*(r[i]-r[i-1]);
        }
    }
    cout<<ans;
}

int32_t main()
{
    fast
    // test(t)
        karanel();
    return 0;
}