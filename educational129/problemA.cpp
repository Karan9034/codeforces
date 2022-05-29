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
    int n, m, max_a=0, max_b=0;
    cin>>n;
    vector<int> a(n);
    f(i, 0, n){
        cin>>a[i];
        if(max_a<a[i]){
            max_a = a[i];
        }
    }
    cin>>m;
    vector<int> b(m);
    f(j, 0, m){
        cin>>b[j];
        if(max_b<b[j]){
            max_b = b[j];
        }
    }
    if(max_a==max_b){
        cout<<"Alice"<<endl;
        cout<<"Bob"<<endl;
    }else if(max_a>max_b){
        cout<<"Alice"<<endl<<"Alice"<<endl;
    }else{
        cout<<"Bob"<<endl<<"Bob"<<endl;
    }
}

int main()
{
    fast;
    test(t)
        karanel();
    return 0;
}