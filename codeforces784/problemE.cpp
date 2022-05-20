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
    cin >> n;

    vector<vector<int>> cnt(12, vector<int>(12, 0));
    long long ans = 0;
    
    f(i, 0, n){
        string s;
        cin >> s;
        f(j, 0, 2){
            for(char c = 'a'; c <= 'k'; ++c) {
                if(c == s[j]) continue;
                string a = s; a[j] = c;
                ans += cnt[a[0] - 'a'][a[1] - 'a'];
            }
        }
        ++cnt[s[0] - 'a'][s[1] - 'a'];
    }
    cout << ans << "\n";
}

int main()
{
    fast;
    test(t)
        karanel();
    return 0;
}