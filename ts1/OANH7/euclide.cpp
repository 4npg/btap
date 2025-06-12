#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'

int d, x, y;
void exe(int a, int b) {
	if (b==0) {
		d = a;
		x = 1;
		y = 0;
	} else {
		exe(b, a%b);
		int temp = x;
		x = y;
		y = temp - (a/b) * y;
	}
}

int main() {
	fast;
	
}