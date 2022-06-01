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
    string start="", end="";
    cin>>start;
    cin>>end;
    int row_start, column_start, row_end, column_end;
    row_start = start[0] - 'a';
    column_start = start[1] - '1';
    row_end = end[0] - 'a';
    column_end = end[1] - '1';

    vector<string> ans;

    while(row_start!=row_end || column_start!=column_end){
        if(row_start==row_end){
            if(column_start<column_end){
                ans.push_back("U");
                column_start++;
            }
            if(column_start>column_end){
                ans.push_back("D");
                column_start--;
            }
        }else if(column_start==column_end){
            if(row_start<row_end){
                ans.push_back("R");
                row_start++;
            }
            if(row_start>row_end){
                ans.push_back("L");
                row_start--;
            }
        }else{
            if(row_start>row_end && column_start>column_end){
                ans.push_back("LD");
                row_start--;
                column_start--;
            }else if(row_start>row_end && column_start<column_end){
                ans.push_back("LU");
                row_start--;
                column_start++;
            }else if(row_start<row_end && column_start>column_end){
                ans.push_back("RD");
                row_start++;
                column_start--;
            }else if(row_start<row_end && column_start<column_end){
                ans.push_back("RU");
                row_start++;
                column_start++;
            }
        }
    }
    int n=ans.size();
    cout<<n<<endl;
    f(i, 0, n){
        cout<<ans[i]<<endl;
    }
}

int32_t main()
{
    fast
    // test(t)
        karanel();
    return 0;
}