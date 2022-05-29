#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

#define test(t)     int t; cin >> t; while(t--)
#define f(i, a, b)  for(int i = a; i < b; i++)
#define endl        "\n"
#define deb(x)      cout << #x << ": " << x << endl;
#define fast        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*
-----------------------------------------------
    Target      :   Master
    Author      :   Karan Agrawal
    GitHub      :   Karan9034
    Codeforces  :   karanel
    About       :   Someone who hates competetive programming.
-----------------------------------------------
*/
template <typename T1, typename T2>
struct desc_second {
    typedef pair<T1, T2> type;
    bool operator ()(type const& a, type const& b) const {
        if(a.second==b.second){
            return (a.first > b.first);
        }
        return (a.second > b.second);
    }
};

void karanel()
{
    int n, count=1, score=0;
    cin>>n;
    vector<pair<int, int>> arr(n);
    f(i, 0, n){
        cin>>arr[i].first>>arr[i].second;
    }
    // sort(arr.begin(), arr.end(), greater<int>());
    sort(arr.begin(), arr.end(), desc_second<int, int>());
    while(count>0 && !arr.empty()){
        score+=arr[0].first;
        count+=arr[0].second-1;
        arr.erase(arr.begin());
    }
    cout<<score<<endl;
}

int main()
{
    fast;
    // test(t)
        karanel();
    return 0;
}