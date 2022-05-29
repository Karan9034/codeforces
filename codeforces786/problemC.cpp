#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

#define test(t)     ll t; cin >> t; while(t--)
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
    string s, t;
    cin>>s;
    cin>>t;
    if(t.length()==1 && t[0]=='a'){
        cout<<1<<endl;
        return;
    }
    size_t found = t.find('a');
    if(found!=string::npos){
        cout<<-1<<endl;
        return;
    }
    ll n = pow(2, s.length());
    cout<<n<<endl;
}

int main()
{
    fast;
    test(t)
        karanel();
    return 0;
}