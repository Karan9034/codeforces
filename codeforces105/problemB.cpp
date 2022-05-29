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
    double vp, vd, t, f, c;
    cin>>vp>>vd>>t>>f>>c;
    if(vp>vd){cout<<0;return;}
    double pos=t*vp, ans=0, vr=vd-vp;
    while(pos<c){
        double tr = pos/vr;
        pos += tr*vp;
        if(pos<c){
            pos += vp*(f + tr);
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