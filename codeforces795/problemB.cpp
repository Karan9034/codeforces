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
    int n;
    cin>>n;
    vpii arr(n);
    bool flag=true;
    vi ans(n);
    f(i, 0, n){
        cin>>arr[i].first;
        arr[i].second=i;
        ans[i] = i+1;
    }
    f(i, 0, n){
        if(i==0 && arr[i].first!=arr[i+1].first){
            flag=false;
            break;
        }else if(i==n-1 && arr[i].first!=arr[i-1].first){
            flag=false;
            break;
        }else if(i>0 && i<n-1 && arr[i].first!=arr[i+1].first && arr[i].first!=arr[i-1].first){
            flag=false;
            break;
        }else if(arr[i].first==arr[i+1].first){
            swap(ans[arr[i].second], ans[arr[i+1].second]);
        }
    }
    if(!flag){
        cout<<-1<<endl;
        return;
    }
    f(i, 0, n){
        cout<<ans[i]<<' ';
    }  
    cout<<endl;
}

int32_t main()
{
    fast
    test(t)
        karanel();
    return 0;
}