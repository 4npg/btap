// authur : anphung
// github : 4npg
#include <bits/stdc++.h>
using namespace std;
#define int64 long long
#define TASK "tenbai"
#define el cout<<"\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define f0(i,a,b) for(int (i)=(a);i<=(b);++i)

int n;
int a[105][105];

void pc(int n) {
    int val = 1;
    int tren=0,duoi=n-1;
    int trai=0,phai=n-1;
    while (val <= n * n) {
        for (int j=trai;j<=phai;j++)a[tren][j]=val++;
    	tren++;
        for (int i=tren;i<=duoi;i++)a[i][phai]=val++;
        phai--;
        if (tren<=duoi) {
            for (int j=phai;j>=trai;j--)a[duoi][j]=val++;
            duoi--;
        }
        if (trai<=phai) {
            for (int i=duoi;i>=tren;i--)a[i][trai]=val++;
            trai++;
        }
    }
}

int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }
    cin>>n;
    pc(n);
    f0(i,0,n-1){
    	f0(j,0,n-1){
    		cout<<a[i][j]<<" ";
    	}
    	el;
    }
}


