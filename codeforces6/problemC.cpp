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


void karanel()
{
    int n, a=0, b=0;
    cin>>n;
    vi arr(n);
    f(i, 0, n) cin>>arr[i];
    int l=0, r=n-1;
    if(n==1){
        cout<<"1 0";
        return;
    }
    while(l<=r){
        if(a<b){
            a+=arr[l];
            l++;
        }else if(b<a){
            b+=arr[r];
            r--;
        }else{
            if(l==r){
                a+=arr[l];
                l++;
                break;
            }
            a+=arr[l];
            b+=arr[r];
            l++;
            r--;
        }
    }
    cout<<r+1<<" "<<n-r-1;
}

int32_t main()
{
    fast
    // test(t)
        karanel();
    return 0;
}