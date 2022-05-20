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
    long long int n, min, max; cin>>n;
    if(n%4==1 || n%4==3 || n<4) cout<<-1<<endl;
    else{
        min = n/6;
        max = n/4;
        if(n%6!=0)
            cout<<min+1<<" "<<max<<endl;
        else
            cout<<min<<" "<<max<<endl;
    }
}

int main()
{
    fast;
    test(t)
        karanel();
    return 0;
}