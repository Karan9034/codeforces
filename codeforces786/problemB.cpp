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
    string s;
    cin>>s;
    if(s[0]>s[1]){
        cout<<25*(s[0]-'a') + (s[1]-'a')+1<<endl;
    }else{
        cout<<25*(s[0]-'a') + (s[1]-'a')<<endl;
    }
}

int main()
{
    fast;
    test(t)
        karanel();
    return 0;
}