
# Hướng dẫn cơ bản về Markdown

Markdown là một ngôn ngữ đánh dấu nhẹ, dễ viết và dễ đọc, thường dùng để viết tài liệu, README, blog, và nhiều nội dung khác.

---

## 1. Các thao tác cơ bản

### 1.1. Tiêu đề

Sử dụng dấu `#` để tạo tiêu đề:

```md
# Tiêu đề cấp 1
## Tiêu đề cấp 2
### Tiêu đề cấp 3
```

### 1.2. In đậm, in nghiêng

```md
**in đậm** hoặc __in đậm__

*in nghiêng* hoặc _in nghiêng_

***vừa in đậm vừa nghiêng***
```

### 1.3. Danh sách

#### Danh sách không thứ tự:
```md
- Mục 1
- Mục 2
  - Mục 2.1
```

#### Danh sách có thứ tự:
```md
1. Mục một
2. Mục hai
```

### 1.4. Liên kết và hình ảnh

```md
[OpenAI](https://openai.com)

![Alt text cho ảnh](https://example.com/image.jpg)
```

### 1.5. Đoạn mã

#### Mã nội dòng:
```md
Sử dụng `code` để đánh dấu đoạn mã.
```

#### Khối mã nhiều dòng:
```md
\`\`\`cpp
#include <iostream>
int main() {
    std::cout << "Hello, Markdown!";
}
\`\`\`
```

### 1.6. Trích dẫn

```md
> Đây là một đoạn trích dẫn.
```

### 1.7. Gạch ngang

```md
---
```

---

## 2. Cấu trúc một file Markdown hoàn chỉnh

Một file Markdown hoàn chỉnh nên có:

1. **Tiêu đề chính** – xác định nội dung tài liệu
2. **Mục lục (tuỳ chọn)** – dùng với `[TOC]` hoặc tự viết
3. **Các phần nội dung rõ ràng** – chia bằng các tiêu đề phụ
4. **Đoạn mã hoặc hình ảnh minh hoạ** – nếu cần thiết
5. **Kết luận hoặc liên kết thêm tài liệu**

---

## 3. Ví dụ cấu trúc

```md
# Giới thiệu về thuật toán tìm kiếm

## Mục lục
- [Giới thiệu](#giới-thiệu)
- [Thuật toán tuyến tính](#thuật-toán-tuyến-tính)
- [Thuật toán nhị phân](#thuật-toán-nhị-phân)

## Giới thiệu
Tài liệu này mô tả...

## Thuật toán tuyến tính
Chi tiết thuật toán...

## Thuật toán nhị phân
Chi tiết thuật toán...

## Kết luận
So sánh và ứng dụng...
```

---

*Viết Markdown không khó, chỉ cần luyện tập một chút là bạn sẽ thành thạo!*
