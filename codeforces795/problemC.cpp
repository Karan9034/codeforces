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
    int n, k, first=-1, last=-1;
    cin>>n>>k;
    string s;
    cin>>s;
    for(int i=n-1; i>=0; i--){
        if(s[i] == '1'){
            last = i;
            break;
        }
    }
    if(last!=-1 && (n-last-1) <= k){
        swap(s[last], s[n-1]);
        k -= n-last-1;
    }
    f(i, 0, n-1){
        if(s[i] == '1'){
            first = i;
            break;
        }
    }
    if(first!=-1 && first <= k){
        swap(s[first], s[0]);
        k -= first;
    }
    
    int ans = 0;
    f(i, 0, n-1){
        ans += stoi(s.substr(i, 2));
    }
    cout<<ans<<endl;
}

int32_t main()
{
    fast
    test(t)
        karanel();
    return 0;
}