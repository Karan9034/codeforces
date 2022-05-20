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
    long long int n, q, sum=0, tmp=0;
    cin>>n>>q;
    vector<long long int> arr(n);
    map<long long int, long long int> mp;
    f(i, 0, n){
        cin>>arr[i];
        sum += arr[i];
    }
    while(q--){
        long long int t; cin>>t;
        if(t==1){
            long long int ind, val;
            cin>>ind>>val;
            if(mp.find(ind) == mp.end()){
                if(tmp==0){
                    sum += val - arr[ind-1];
                }else{
                    sum += val - tmp;
                }
            }
            else{
                sum += val - mp[ind];    
            }
            mp[ind] = val;
            arr[ind-1] = val;
        }else if(t==2){
            long long int val;
            cin>>val;
            tmp = val;
            mp.clear();
            sum = val*n;
        }
        cout<<sum<<endl;
    }
}

int main()
{
    fast;
    // test(t)
    karanel();
    return 0;
}