#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define TASK "tenbai"
#define endl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define FOR(i,a,b) for(ll (i)=(a);i<=(b);++i)
#define LOCAL

#ifdef LOCAL
  #define dbg(x) do { cerr << "[" << #x << "] = " << (x) << '\n'; } while(0)
#else
  #define dbg(x) do {} while(0)
#endif

vector<int> tt(const string& s) {
    int n = s.length();
    vector<int> l(n, 0);
    for (int i = 1; i < n; i++) {
        int j = l[i - 1];
        while (j > 0 && s[i] != s[j]) {
            j = l[j - 1];
        }
        if (s[i] == s[j]) {
            j++;
        }
        l[i] = j;
    }
    return l;
}

string ans(const string& s) {
    vector<int> l = tt(s);
    int n = s.length();
    int len = n - pi[n - 1]; 
    if (n % len == 0) {
        return s.substr(0, len);
    }
    return s;
}

int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }
    string s;cin>>s;
    cout<<ans(s);

}

