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
    ll n, ans=0;
    cin>>n;
    string s;
    cin>>s;
    if(n==1) cout<<1<<endl;
    else if(n==2) cout<<2<<endl;
    else{
        f(i, 0, n){
            string tmp = s;
            tmp.erase(tmp.begin()+i);
            int l = 0, r = tmp.length()-1;
            bool flag = true;
            while(l<r){
                if(tmp[l]!=tmp[r]){
                    flag = false;
                    break;
                }
                l++;
                r--;
            }
            if(flag==true){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}

int main()
{
    fast;
    test(t)
        karanel();
    return 0;
}