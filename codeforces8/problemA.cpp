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
    string mn, before, after;
    cin>>mn>>before>>after;
    if(before==after){
        size_t a = mn.find(before);
        size_t b = mn.find(after, a+before.length());
        if(a==string::npos || b==string::npos){
            cout<<"fantasy"<<endl;
        }else{
            cout<<"both"<<endl;
        }
        return;
    }
    int flag=0;
    size_t a = mn.find(before);
    if(a==string::npos) flag=0;
    else{
        size_t b = mn.find(after, a+before.length());
        if(b!=string::npos) flag=1;
        reverse(mn.begin(), mn.end());
        reverse(after.begin(), after.end());
        size_t c = mn.find(after, mn.length()-a);
        if(c!=string::npos) flag+=2;
    }

    switch(flag){
        case 0:
            cout<<"fantasy"<<endl;
            break;
        case 1:
            cout<<"forward"<<endl;
            break;
        case 2:
            cout<<"backward"<<endl;
            break;
        case 3:
            cout<<"both"<<endl;
            break;
    }
}

int32_t main()
{
    fast
    // test(t)
        karanel();
    return 0;
}