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
    vector<string> arr;
    string s;
    int max_len = 0;
    while(getline(cin, s)){
        arr.push_back(s);
        int tmp = s.length();
        max_len = max(max_len, tmp);
    }
    int n = arr.size()+2;
    vector<string> ans(n, "");
    f(i, 0, max_len+2){
        ans[0]+='*';
        ans[n-1]+='*';
    }
    cout<<ans[0]<<endl;
    int diff;
    bool flag=true;
    f(i, 1, n-1){
        ans[i]+='*';
        diff = max_len - arr[i-1].length();
        if(flag){
            f(j, 0, diff/2){
                ans[i]+=' ';
            }
            ans[i]+=arr[i-1];
            f(j, 0, diff - diff/2){
                ans[i]+=' ';
            }
            flag = diff%2==0 ? flag : !flag;
        }else{
            f(j, 0, diff - diff/2){
                ans[i]+=' ';
            }
            ans[i]+=arr[i-1];
            f(j, 0, diff/2){
                ans[i]+=' ';
            }
            flag = diff%2==0 ? flag : !flag;
        }
        ans[i]+='*';
        cout<<ans[i]<<endl;
    }
    cout<<ans[n-1]<<endl;
}

int32_t main()
{
    fast
    // test(t)
        karanel();
    return 0;
}