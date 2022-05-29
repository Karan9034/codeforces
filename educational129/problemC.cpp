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

void karanel()
{
    int n;
    cin>>n;
    unordered_map<int,int> mp;
    vector<int> a(n);
    f(i, 0, n){
        cin>>a[i];
        mp[a[i]]++;
    }
    vector<int> b(n);
    f(i, 0, n){
        cin>>b[i];
        mp[a[i]]++;
    }
    vector<pair<int,int>> v;
    f(i, 0, n){
        v.push_back({a[i],b[i]});
    }
    sort(v.begin(),v.end());
    vector<pair<int,int>> all;
    for(int i=0;i<n;i++)
    {
        int temp=mp[a[i]];
        int tempu=mp[b[i]];
        if(a[i]==v[i].first&&b[i]==v[i].second)
        {

        }
        else
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[j]==v[i].first&&b[j]==v[i].second)
                {
                    swap(a[i],a[j]);
                    swap(b[i],b[j]);
                    all.push_back({i+1,j+1});
                }
            }
        }
    }
    bool ans=true;
    for(int i=1;i<n;i++)
    {
        if(v[i].first>=v[i-1].first&&v[i].second>=v[i-1].second){}
        else
        ans=false;
    }
    if(ans)
    {
        cout<<all.size()<<endl;
        for(auto it:all)
        cout<<it.first<<" "<<it.second<<endl;
    }
    else
    cout<<"-1"<<endl;
}

int main()
{
    fast;
    test(t)
        karanel();
    return 0;
}