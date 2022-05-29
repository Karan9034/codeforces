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
    int k,l,m,n,d;
    int sum =0;
    cin>>k>>l>>m>>n>>d;
    f(i, 1, d+1) if(i%k==0||i%l==0||i%m==0||i%n==0) sum++;
    cout<<sum<<endl;
}

int main()
{
    fast;
    // test(t)
        karanel();
    return 0;
}