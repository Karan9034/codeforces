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
    int l1, l2, r1, r2;
    bool max=false, min=false;
    cin>>l1>>r1>>l2>>r2;
    if(l1==l2){
        cout<<l1<<endl;
        return;
    }
    if(l1<l2){
        max=true;
    }else{
        min=true;
    }
    if(max && l2<=r1){
        cout<<l2<<endl;
        return;
    } else if(min && l1<=r2){
        cout<<l1<<endl;
        return;
    } else{
        cout<<l1+l2<<endl;
        return;
    }
}

int main()
{
    fast;
    test(t)
        karanel();
    return 0;
}