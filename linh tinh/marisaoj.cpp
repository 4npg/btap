// authur : anphung
// github : 4npg
#include <bits/stdc++.h>
using namespace std;
#define int64 long long
#define TASK "tenbai"
#define el cout<<"\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define FOR(i,a,b) for(int (i)=(a);i<=(b);++i)
#define bit(mask,i) ((mask>>i)&1)
#define pb push_back 
#define pob pob_back

int n;
int64 k;
int64 a[2000];

void bitwiseop(){
    bool flag = false;
    FOR(mask,0,(1<<n)-1){
        int64 sum = 0;
        FOR(i,0,n-1){
            if(bit(mask,i))sum+=a[i];
        }
        if(sum==k){
            flag = true;
            break;
        }
    }
    cout<<((flag)?"YES":"NO");
}
bool flag = false;
void Try(int i,int64 sum){
    if(i==n){
        if(sum==k)flag = true;
        return;
    }
    if(flag)return;

    Try(i+1,sum);
    Try(i+1,sum+a[i]);

}

int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }
    cin>>n>>k;
    FOR(i,0,n-1)cin>>a[i];
    flag = false;
    Try(0,0);
    cout<<((flag)?"YES":"NO");
}


