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
    int d, sumTime, minReq=0, maxLim=0;
    cin>>d>>sumTime;
    vi minTime(d);
    vi maxTime(d);
    f(i, 0, d){
        cin>>minTime[i]>>maxTime[i];
        minReq+=minTime[i];
        maxLim+=maxTime[i];
    }
    if(sumTime < minReq || sumTime > maxLim){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    vi ans(d, 0);
    f(i, 0, d){
        ans[i] = minTime[i];
        sumTime -= minTime[i];
    }
    f(i, 0, d){
        if(sumTime > (maxTime[i] - minTime[i])){
            ans[i] = maxTime[i];
            sumTime -= (maxTime[i] - minTime[i]);
        }else{
            ans[i] += sumTime;
            sumTime = 0;
        }
    }
    fr(it, ans){
        cout<<*it<<" ";
    }
}

int32_t main()
{
    fast
    // test(t)
        karanel();
    return 0;
}