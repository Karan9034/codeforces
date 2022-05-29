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
    int a=0, b=0, n = s.length();
    if(n==1){
        b = 1 + (int)(s[0] - 'a');
        cout<<"Bob "<<b<<endl;
        return;
    }
    if(n%2==0){
        f(i, 0, n){
            a = a + 1 + (int)(s[i]-'a');
        }
        cout<<"Alice "<<a<<endl;
    }else if(s[0]>s[n-1]){
        f(i, 0, n-1){
            a = a + 1 + (int)(s[i]-'a');
        }
        b = 1 + (int)(s[n-1]-'a');
        cout<<"Alice "<<a - b<<endl;
    }else{
        f(i, 1, n){
            a = a + 1 + (int)(s[i]-'a');
        }
        b = 1 + (int)(s[0]-'a');
        cout<<"Alice "<<a - b<<endl;
    }
}

int main()
{
    fast;
    test(t)
        karanel();
    return 0;
}