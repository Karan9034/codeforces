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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int start=-1, end=0, ans=0;
    bool flag=false;
    f(i, 0, n){
        if(s[i]=='x'){
            flag=true;
            end=i;
        }else{
            if(flag==true && end-start>2){
                ans += end - start - 2;
            }
            flag=false;
            start = i;
        }
    }
    if(end==n-1 && end-start>2){
        ans += end - start - 2;
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