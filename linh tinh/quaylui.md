# CHƯƠNG I : QUAY LUI
## Tổng hợp kinh nghiệm và độ hiểu về bài trong chương

### BÀI 1 : XÂU NHỊ PHÂN 
**ĐỀ BÀI** :Hãy in ra toàn bộ xâu nhị phân có độ dài n.

  *Input*: Một dòng gồm một số nguyên n.

  *Ouput*: In ra những xâu nhị phân có độ dài n. Bạn có thể in ra theo thứ tự bất kì.

  *Điều kiện*: 
  	- 1 <= n <= 10.

  *Ví dụ*:
   #### input: 
   ``` md
   3
   ```

   #### ouput:
   ``` md
   000

   001

   010

   011

   100
	
   101
	
   110
 
   111
   ```

   **HIỂU BÀI NHƯ SAU**: In ra tất cả các xâu nhị phân có độ dài n =))

   **THUẬT TOÁN**: 
    1. Sử dụng thuật toán sinh theo cách của thầy Lê Minh Hoàng phát biểu như sau: nhảy từ hàng đơn vị lên để xét, tìm số 0 đầu tiên rồi thay bằng 1, tiếp tục thay tất cả số 1 đằng sau nó thành 0 rồi làm liên tiếp như thế
    
### Pseudo code 

   ``` pas
    i := n;
    while(i>0) and (x[i] = 1) do i:=i-1;
    if i>0 then 
    	begin
	    	x[i] = 1;
	    	for j:=i+1 to n do x[j] := 0;
    	end;
   ```
 ### Code C++

``` cpp
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> x(n, 0);
	while (true) {
		for (int bit : x)cout << bit;
	    cout << '\n';

	    int i = n - 1;
        while (i >= 0 && x[i] == 1) --i;
	    if (i < 0) break;

	    x[i] = 1;
        fill(x.begin() + i + 1, x.end(), 0);
	}
}
```


 2. Sử dụng thuật toán quay lui (backtracking) sinh 2^n-1 dãy nhị phân độ dài n, bằng cách tại mỗi vị trí ```pos``` chọn một ký tự ````0```` hoặc ````1```` thử đến khi nào xâu nhị phân đạt độ dài n thì dừng.


 ### Pseudo code
 ```cpp
 void Try(int pos){
 	if(cur_string.size() == n){
 		cout<<cur_string<<"\n";
 		return;
 	}
 	for(char c='0';c<='1';c++){
 		cur_string.push_back(c);
 		Try(pos+1);
 		cur_string.pob_back();
 	}
 }
 ```

 ### Code C++
 
 ``` cpp
 // authur : anphung iu bcu
#include <bits/stdc++.h>
using namespace std;
#define int64 long long
#define TASK "tenbai"
#define el cout<<"\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define FOR(i,a,b) for(int (i)=(a);i<=(b);++i)
#define pb push_back
#define pob pop_back
int n;
string curstring;
void Try(int pos){
	if(pos==n){
		cout<<curstring;
		el;
		return;
	}
	for(char c='0';c<='1';c++){
		curstring.pb(c);
		Try(pos+1);
		curstring.pob();
	}
}

int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }
    cin>>n;
    curstring = "";
    Try(0);
}
```





