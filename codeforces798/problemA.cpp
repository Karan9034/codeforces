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
    int n, m, k;
    cin>>n>>m>>k;
    string a,b;
    string c="";
    cin>>a>>b;
    sort(all(a));
    sort(all(b));
    int flag=0, count=0;
    while(a.size()!=0 && b.size()!=0){
        if(count==k){
            count=0;
            if(flag==1){
                if(flag==1) count=0;
                c += a[0];
                a.erase(a.begin());
                count++;
                flag=0;  
            }else{
                if(flag==0) count=0;
                c += b[0];
                b.erase(b.begin());
                count++;
                flag=1;
            }
            continue;
        }
        if(a[0]>b[0]){
            if(flag==0) count=0;
            c += b[0];
            b.erase(b.begin());
            count++;
            flag=1;
        }else{
            if(flag==1) count=0;
            c += a[0];
            a.erase(a.begin());
            count++;
            flag=0;
        }
    }
    cout<<c<<endl;
}

int32_t main()
{
    fast
    test(t)
        karanel();
    return 0;
}