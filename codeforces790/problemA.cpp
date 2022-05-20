#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

#define test(t)     int t; cin >> t; while(t--)
#define f(i, a, b)  for(int (i) = (a); (i) < (b); ++(i))
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
    string s;
    cin>>s;
    int s1=0, s2=0;
    for(int i=0; i<3; i++){
        s1 += (int)s[i];
    }
    for(int i=3; i<6; i++){
        s2 += (int)s[i];
    }
    if(s1==s2) cout<<"YES\n";
    else cout<<"NO\n";
}

int main()
{
    fast;
    test(t)
        karanel();
    return 0;
}