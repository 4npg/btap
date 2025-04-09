#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr)
void READFILE(){
    freopen("INP.TXT","r",stdin);
    freopen("OUT.TXT","w",stdout);
}
int main() {
    fast;
    int n;cin >> n;
    
    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }
    
    vector<int> res;
    for (int i = 1; i <= n; ++i) {
        res.push_back(i);
    }
    
    vector<int> a(n);
    
    // Xử lý ngược từ cuối về đầu:
    // Tại mỗi bước, lấy giá trị p[i] làm chỉ số định vị phần tử cần chọn từ vector res.
    // p[i] thể hiện số lượng các phần tử nhỏ hơn phần tử cần chọn nằm bên phải phần tử đó trong hoán vị ban đầu.
    // Vì quá trình này đã được mã hóa từ trái sang phải, chúng ta duyệt ngược lại từ i = n - 1 đến 0.
    for (int i = n - 1; i >= 0; --i) {
        int k = p[i];
        // Vị trí phần tử cần chọn trong vector res chính là:
        // (k = số phần tử nhỏ hơn phải nằm bên phải) =>
        // phải lấy phần tử ở vị trí res.size() - k - 1.
        // Giả sử res đang chứa các số đã sắp xếp từ nhỏ đến lớn.
        auto pos = res.begin();
        advance(pos, res.size() - k - 1);
        a[i] = *pos;
        // Sau khi chọn, xoá phần tử đó khỏi res để không bị trùng và cập nhật tập số còn lại.
        res.erase(pos);
    }
    
    // In kết quả hoán vị a
    for (int num : a) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
