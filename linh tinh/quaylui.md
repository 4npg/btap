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

### Minh họa cây quay lui

```
                           ""
                      /          \
                     0             1
                   /   \          / \
                 00     01       10  11
                / \     / \     / \  / \
             000 001 010 011 100 101 110 111
```


**
--

### BÀI 2: XÂU ABC
**ĐỀ BÀI**: Hãy in ra những xâu độ dài 
n
 chỉ gồm ba loại kí tự A, B, và C và không có hai kí tự cạnh nhau nào được giống nhau.

Ví dụ xâu ABBC là không thỏa mãn do có hai kí tự B đứng cạnh nhau.

**Input**:
- 	Một dòng gồm một số nguyên n.

**Ouput**:
- In ra toàn bộ những xâu thỏa mãn, có thể in ra theo thứ tự bất kì.

**Điều kiện**:
- 1 <= n <= 10.

**Ví dụ**

*Input*:
```
2
```

*Ouput*:
```
AB
BA
BC
CB
AC
CA
```
**HIỂU BÀI**: Chỉ đơn giản là sinh các dãy kí tự có độ dài ```n``` cho trước và đảm bảo 2 kí tự liền kề nhau không giống nhau là được.

**THUẬT TOÁN**: 
1. Thuật toán quay lui:Duy trì 1 xâu ```cur_string``` để lưu cấu hình hiện tại, 1 biến ```pos``` để lưu vị trí đang chạy trong xâu, tại mỗi vị trí ```pos``` ta sẽ thử mọi kí tự trong tập hợp ```{A,B,C}``` và đảm bảo kí tự được thử khác với kí tự liền kề. Duy trì việc thử đến khi độ dài của ```cur_string``` đạt ```n``` thì dừng coi như hoàn thành 1 cấu hình.

### Pseudo code

``` cpp
	string cur_string;
	void Try(int pos){
		if(cur_string.size()==n){
			cout<<cur_string<<'\n';
			return;
		}
		for(auto c:{'A','B','C'}){
			if(cur_string.empty()||cur_string.back()!=c){
				cur_string.push_back(c);
				Try(pos+1);
				cur_string.pop_back();
			}
		}
	}
```
### C++ code

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
string cur_string;
void Try(int pos){
    if(cur_string.size()==n){
        cout<<cur_string;
        el;
        return;
    }
    for(auto c:{'A','B','C'}){
        if(cur_string.empty()||cur_string.back()!=c){
            cur_string.pb(c);
            Try(pos+1);
            cur_string.pob();
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
    cur_string= "";
    Try(0);
}
```
### MINH HỌA CÂY QUAY LUI
```
                      " "
            /          |         \
          A            B           C
         / \          / \         / \
        B   C        A   C       A   B

```


**
--

### BÀI 3: TỔNG TẬP CON
**Đề bài**:Cho mảng *A* có *n* phần tử. Hãy xác định xem có tồn tại một tập con của *A* mà có tổng bằng *k* không.

**Input**:
- Dòng đầu tiên gồm hai số nguyên *n*,*k*.
- Dòng thứ hai gồm *n* số nguyên *Ai*.

**Output**:
- In ra ***YES*** nếu tồn tại một tập con của *A* mà tổng của nó bằng *k*, ngược lại in ***NO***.

**Điều kiện** 
- 1 <= *n* <= 20.
- 1 <= *Ai*,*k* <= 1e18

**Ví dụ**
- *Input:*
```
4 7
1 2 3 4
```
- *Ouput:*
```
YES
```

**HIỂU BÀI**:Tìm 1 ```subarray``` bất kì thuộc mảng ```A``` cho trước sao cho tổng các phần tử của ```subarray``` đó bằng với ```k```.

**THUẬT TOÁN**:

1. Thuật toán quay lui: Duy trì 1 biến ```sum``` kiểu ```int``` và 1 biến ```flag``` kiểu ```bool``` để thực hiện xây dựng cấu hình khi ```sum==k``` thì ```flag``` chuyển từ ```false``` thành ``` true ``` và ```return```, trong đó xây dựng cấu hình bằng 2 trường hợp xảy ra đồng thời là ```sum``` giữ nguyên và trường hợp ```sum``` + ```A[i]```.

### Pseudo code

``` cpp
	bool flag = false;
	void Try(int i,int64 sum){
		if(i==n){
			if(sum==k){
				flag = true;
				return;
			}
		}
		if(flag)return;
		Try(i+1,sum);
		Try(i+1,sum+a[i]);
	}
```
### Code C++

``` cpp
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
```

### MINH HỌA CÂY QUAY LUI

```
                         (i=0, sum=0)
                         /           \
                (i=1, sum=0)     (i=1, sum=1)
                 /     \           /     \
            (i=2,0)   (i=2,2)    (i=2,1)  (i=2,3)
             /  \      /  \       / \       /  \
         (3,0)(3,3*) (3,2)(3,5) (3,1)(3,4)(3,3*)(3,6)

```


