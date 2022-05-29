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
	ll cnt=0, n=s.length();
	f(i, 0, n){
		if(s[i]=='A') cnt++;
		else cnt--;
		if(cnt<0){
			cout<<"NO"<<endl;
			return;
		}
	}
	if(s[0] == 'B' || s[n-1] != 'B'){
		cout<<"NO"<<endl;
	}else cout<<"YES"<<endl;
}

int main()
{
    fast;
    test(t)
        karanel();
    return 0;
}