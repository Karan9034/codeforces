#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

#define M_PI 3.14159265358979323846
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
    double n, R, r;
    cin>>n>>R>>r;
    if(n==1 && r<=R) cout<<"YES";
    else if(2*asin(r/(R-r)) <= (2*M_PI+1e-8)/n){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}

int main()
{
    fast;
    // test(t)
        karanel();
    return 0;
}