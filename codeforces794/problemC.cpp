#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

#define test(t)     ll t; cin >> t; while(t--)
#define f(i, a, b)  for(ll i = a; i < b; i++)
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
    ll last=0, n;
    cin>>n;
    vector<ll> arr(n);
    f(i, 0, n){
        cin>>arr[i];
    }
    if(n%2==0){
        sort(arr.begin(), arr.end());
        vector<ll> v(n,-1);
        int j=0, k=0;
        for(int i=n-1; j<n; i--)
        {
            v[j]=arr[i];
            j+=2;
            k=i;
        }
        j=k-1;
        f(i, 0, n)
        {
            if (v[i]==-1)
            {
                v[i]=arr[j];
                j--;
            }
        }

        bool ans=true;
        f(i, 0, n){
            if(i==0){
                if(v[0] < v[n-1] && v[0] < v[1]){}
                else if(v[0] > v[n-1] && v[0] > v[1]){}
                else{ans=false; break;}
            }else if(i==n-1){
                if(v[n-1] < v[n-2] && v[n-1] < v[0]){}
                else if(v[n-1] > v[n-2] && v[n-1] > v[0]){}
                else{ans=false; break;}
            }else{
                if(v[i] < v[i-1] && v[i] < v[i+1]){}
                else if(v[i] > v[i-1] && v[i] > v[i+1]){}
                else{ans=false; break;}
            }
        }
        if(ans){
            cout<<"YES"<<endl;
            f(i, 0, n){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    else cout<<"NO"<<endl;
}

int main()
{
    fast;
    test(t)
        karanel();
    return 0;
}