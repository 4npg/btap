#include <bits/stdc++.h>
using namespace std;
#define ll int
#define TASK "tenbai"
#define nl cout<<"\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define FOR(i,a,b) for(ll (i)=(a);i<=(b);++i)
#define all(a) (a).begin(),(a).end()
#define bit(mask,i) ((mask>>i)&1)
#define pb push_back
#define pob pop_back

ll n;
bool isinCol[13],isinDiag1[26],isinDiag2[26];
vector<ll> curX;
vector<ll> curY;

void print(){
	FOR(i,0,n-1){
		cout<<"( "<<curX[i]<<";"<<curY[i]<<")";
		if(i<n-1)cout<<" ";
	}
	nl;
}
ll cnt=0;
void sinh(ll pos){
	FOR(curCol,1,n){
		ll curDiag1 = pos + curCol;
		ll curDiag2 = pos - curCol + 13;

		if(isinCol[curCol]==true)continue;	
		if(isinDiag1[curDiag1]==true)continue;
		if(isinDiag2[curDiag2]==true)continue;

		curX.pb(pos);
		curY.pb(curCol);

		isinCol[curCol]=true;
		isinDiag1[curDiag1]=true;
		isinDiag2[curDiag2]=true;

		if(curX.size()==n){
			print();
			cnt++;
		}else sinh(pos+1);

		curX.pob();
		curY.pob();
		isinCol[curCol]=false;
		isinDiag1[curDiag1]=false;
		isinDiag2[curDiag2]=false;

	}
}

int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }
    cin>>n;

    memset(isinCol, 0, sizeof(isinCol));
    memset(isinDiag1, 0, sizeof(isinDiag1));
    memset(isinDiag2, 0, sizeof(isinDiag2));

    sinh(1);
    cout<<cnt;
}


