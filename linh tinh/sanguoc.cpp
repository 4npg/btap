#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    unordered_map<int, int> freq;
    vector<int> vals;

    // Đọc và đếm tần suất
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        freq[x]++;
        if (freq[x] == 2) vals.push_back(x); // Lưu khi đạt >= 2
    }

    sort(vals.rbegin(), vals.rend()); // Sắp xếp giảm dần

    ll hv = 0, hcn1 = 0, hcn2 = 0;
    for (int x : vals) {
        if (freq[x] >= 4 && hv == 0) hv = 1LL * x * x;
        if (freq[x] >= 2) {
            if (hcn1 == 0) hcn1 = x;
            else if (hcn2 == 0) {
                hcn2 = x;
                break;
            }
        }
    }

    ll hcn = hcn1 * hcn2;
    cout << max(hv, hcn) << '\n';
}