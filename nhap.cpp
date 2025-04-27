#include <bits/stdc++.h>
using namespace std;

int main() {
    // Ví dụ: Một map tên -> tuổi
    map<string,int> age = {
        {"Alice", 30},
        {"Bob",   25},
        {"Carol", 28}
    };

    cout << "=== Dùng Structured Binding (C++17) ===\n";
    for (auto [name, years] : age) {
        // name  là khóa (first), years là giá trị (second)
        cout << name << " is " << years << " years old.\n";
    }

    cout << "\n=== Dùng cách truy xuất truyền thống ===\n";
    for (const auto &p : age) {
        const string &name = p.first;
        int years         = p.second;
        cout << name << " is " << years << " years old.\n";
    }

    return 0;
}
