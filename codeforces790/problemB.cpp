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
    int n, sum = 0;
    cin>>n;
    vector<int> arr(n);
    f(i, 0, n){
        cin>>arr[i];
        sum += arr[i];
    }
    vector<int>::iterator min = min_element(arr.begin(), arr.end());
    cout<<(sum - (*min) * n)<<endl;
}

int main()
{
    fast;
    test(t)
        karanel();
    return 0;
}