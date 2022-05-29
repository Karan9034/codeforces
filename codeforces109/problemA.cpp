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
    int n, best, worst, ans=0;
    cin>>n;
    vector<int> arr(n);
    cin>>arr[0];
    best = arr[0];
    worst = arr[0];
    f(i, 1, n){
        cin>>arr[i];
        if(arr[i]>best){
            best = arr[i];
            ans++;
        }
        if(arr[i]<worst){
            worst = arr[i];
            ans++;
        }
    }
    cout<<ans<<endl;
}

int main()
{
    fast;
    // test(t)
        karanel();
    return 0;
}