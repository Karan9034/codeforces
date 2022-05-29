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
    ll n, sum=0;
    cin>>n;
    bool errorgorn=true;
    vector<int> arr(n);
    f(i, 0, n){
        cin>>arr[i];
        sum+=arr[i];
    }
    if(n%2==0){
        errorgorn=false;
    }
    if(!errorgorn && sum%2==1){
        cout<<"errorgorn"<<endl;
    }else if(!errorgorn){
        cout<<"maomao90"<<endl;
    }else if(sum%2==1){
        cout<<"maomao90"<<endl;
    }else{
        cout<<"errorgorn"<<endl;
    }
}

int main()
{
    fast;
    test(t)
        karanel();
    return 0;
}