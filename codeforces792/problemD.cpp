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
    int n, k;
    cin>>n>>k;
    vector<int> arr(n);
    vector<int> arr2(n);
    long long int sum = 0;
    f(i, 0, n){
        cin>>arr[i];
        sum += arr[i];
        arr2[i] = arr[i]-n+i+1;
    }
    if(n==k){
        cout<<0<<endl;
        return;
    }
    sort(arr2.begin(), arr2.end(), greater<int>());
    f(i, 0, k){
        sum = sum - arr2[i] - (k-i-1);
    }
    cout<<sum<<endl;
}

int main()
{
    fast;
    test(t)
        karanel();
    return 0;
}