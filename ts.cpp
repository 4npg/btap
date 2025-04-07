#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 7;       // Tổng số người
    int k = 10;      // Giá trị đếm đến khi loại người
    vector<int> circle;
    
    // Khởi tạo danh sách người có số hiệu từ 1 đến 7
    for (int i = 1; i <= n; i++) {
        circle.push_back(i);
    }
    
    // Chọn vị trí bắt đầu khác: thay vì bắt đầu từ index 0 (người số 1), 
    // ta chọn index = 4 (người số 5) nhằm thay đổi thứ tự loại và kết quả cuối cùng.
    int index = 4;
    
    // Mô phỏng quá trình loại người cho đến khi chỉ còn 1 người
    while (circle.size() > 1) {
        // Tìm vị trí loại: (index hiện hành + k - 1) mod kích thước danh sách hiện tại
        index = (index + k - 1) % circle.size();
        cout << "Loại người số: " << circle[index] << endl; // Hiển thị người bị loại ở bước này
        circle.erase(circle.begin() + index);
        // Lưu ý: index hiện hành giữ nguyên vì sau erase, phần tử bên phải chuyển sang vị trí đó.
    }
    
    // Kết quả cuối cùng
    cout << "Người cuối cùng còn lại có số hiệu: " << circle[0] << endl;
    return 0;
}
