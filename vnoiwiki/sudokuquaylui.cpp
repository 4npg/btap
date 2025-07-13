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
    if(row==9)return true; //đủ 9 hàng thì out
    if(col==9)return solve(row+1,0); // đạt cột thứ 9 thì quay lui xuống hàng tiếp theo
    if(a[row][col]!=0)return solve(row,col+1); // nếu ô có giá trị khac 0 rồi thì nhảy sang cột tiếp theo của hàng hiện thời


    FOR(i,1,9){ //bắt đầu quá trình điền số
        if(!isInRow[row][i]&&!isInCol[col][i]&&!isIn3x3[row/3][col/3][i]){ // nếu các ô và cột có số != 0 thì xét
            a[row][col]=i; //giá trị ở cột a[row][col] = i
            isInRow[row][i] = isInCol[col][i] = isIn3x3[row/3][col/3][i] = true; 
            //điền lại các chỉ số hàng cột 3x3 đã tồn tại 1 số

            if(solve(row,col+1))return true;//nếu thỏa mãn các giá trị thì nhảy qua cột tiếp theo

            a[row][col]=0; // bước quay lui xét trạng thái vè 0 để xây cấu hình tiếp theo
            isInCol[col][i]=isInRow[row][i]=isIn3x3[row/3][col/3][i]=false;//cũng là xét cấu hình về 0 để xét tiếp cấu hình khác
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

                //nếu như số này != 0 thì xét các trạng thái về true để khỏi xét
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


