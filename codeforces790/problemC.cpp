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
    int n, q, sum=0;
    cin>>n>>q;
    vector<int> arr(n);
    f(i, 0, n){
        cin>>arr[i];
        sum += arr[i];
    }
    sort(arr.begin(), arr.end(), greater<int>());
    while(q--){
        int count = 0, cal;
        cin>>cal;
        if(sum<cal){
            cout<<-1<<endl;
            continue;
        }
        while(cal>0){
            cal -= arr[count];
            count++;
        }
        cout<<count<<endl;
    }
}

int main()
{
    fast;
    test(t)
        karanel();
    return 0;
}