#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define TASK "tenbai"
#define nl cout<<"\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define FOR(i,a,b) for(int (i)=(a);i<=(b);++i)

bool isInCol[9][10],isInRow[9][10],isIn3x3[9][9][10];
int a[9][9];


bool solve(int row=0,int col=0){
    if(row==9)return true;
    if(col==9)return solve(row+1,0);
    if(a[row][col]!=0)return solve(row,col+1);


    FOR(i,1,9){
        if(!isInRow[row][i]&&!isInCol[col][i]&&!isIn3x3[row/3][col/3][i]){
            a[row][col]=i;
            isInRow[row][i] = isInCol[col][i] = isIn3x3[row/3][col/3][i] = true;

            if(solve(row,col+1))return true;

            a[row][col]=0;
            isInCol[col][i]=isInRow[row][i]=isIn3x3[row/3][col/3][i]=false;
        }
    }
    return false;
}

int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }
    FOR(i,0,8){
        FOR(j,0,8){
            cin>>a[i][j];
            ll num = a[i][j];
            if(num){
                isInRow[i][num]=true;
                isInCol[j][num]=true;
                isIn3x3[i/3][j/3][num]=true;
            }
        } 
    }
    if(solve())
    FOR(i,0,8){
        FOR(j,0,8)
            cout<<a[i][j]<<" ";
        nl;
    }
}


