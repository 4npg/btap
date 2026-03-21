## Câu 1:

def dt ( cd, cr ):
	return cd * cr

dai = float(input("Nhập chiều dài "))
rong = float(input("Nhập chiều rộng "))

print("Diện tích = ", dt(dai, rong))

## Câu 2:

s = input("Nhập xâu: ")
print("Số kí tự trống là:", s.count(" "))

## Câu 3:

a = int(i) for i in input().split()
print("số cuối cùng trong danh sách là: ", a[len(a)])

Lỗi 1: sai cú pháp --> thiếu dấu [] ở dòng 1 
Sửa : a = [int(i) for i in input().split()]

Lỗi 2: truy cập sai chỉ số phần tử cuối ở dòng 2 --> a[len(a)]
Sửa : print("số cuối cùng trong danh sách là: ", a[len(a) - 1])
