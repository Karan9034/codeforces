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
    vi arr(4);
    f(i, 0, 4) cin>>arr[i];
    sort(all(arr), greater<int>());
    int priority=0;
    f(i, 0, 2){
        if(arr[i] < arr[i+1] + arr[i+2]){
            priority = 2;
            break;
        }else if(arr[i] == arr[i+1] + arr[i+2]){
            if(priority!=2) priority = 1;
        }
    }
    if(priority==2){   
        cout<<"TRIANGLE"<<endl;
    }else if(priority==1){   
        cout<<"SEGMENT"<<endl;
    }else{
        cout<<"IMPOSSIBLE"<<endl;
    }
}

int32_t main()
{
    fast
    // tests(t)
        karanel();
    return 0;
}