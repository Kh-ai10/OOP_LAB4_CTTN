#include "Giasuc.h"
#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;

/* Phương thức khởi tạo không tham số
   Đầu vào: Không có tham số đầu vào.
   Đầu ra: Không có giá trị trả về.
   Hoạt động: Khởi tạo số lượng gia súc là 0 và loại gia súc là chuỗi rỗng. */
Giasuc::Giasuc() : soluong(0), loai("") {}

/* Phương thức Nhap
   Đầu vào: Nhập số lượng gia súc từ người dùng.
   Đầu ra: Không có giá trị trả về.
   Hoạt động: Nhập giá trị số lượng gia súc từ người dùng và lưu vào biến soluong. */
void Giasuc::Nhap() {
    cin >> soluong;       
}

/* Phương thức Laysoluong
   Đầu vào: Không có tham số đầu vào.
   Đầu ra: Trả về số lượng gia súc (soluong) của đối tượng.
   Hoạt động: Trả về giá trị của biến soluong, thể hiện số lượng gia súc hiện tại. */
int Giasuc::Laysoluong() const {
    return soluong;
}

/* Phương thức Sinhcon
   Đầu vào: Không có tham số đầu vào.
   Đầu ra: Trả về số con sinh ra, một số ngẫu nhiên trong khoảng từ 0 đến 5.
   Hoạt động: Sinh ra một số ngẫu nhiên đại diện cho số con được sinh trong một lần sinh. */
int Giasuc::Sinhcon() {
    srand(time(0) + rand());
    int ketqua = rand() % 6;
    return ketqua;      
}

/* Phương thức Chosua
   Đầu vào: Không có tham số đầu vào.
   Đầu ra: Trả về số lượng sữa được gia súc cho, là một số ngẫu nhiên.
   Hoạt động: Sinh một số ngẫu nhiên và trả về giá trị này như là lượng sữa gia súc cho. */
int Giasuc::Chosua() {
    srand(time(0) + rand());
    int ketqua = rand();
    return ketqua;
}

/* Phương thức Tieng_keu
   Đầu vào: Không có tham số đầu vào.
   Đầu ra: Trả về chuỗi rỗng.
   Hoạt động: Phương thức mặc định trả về chuỗi rỗng, các lớp con sẽ ghi đè phương thức này để trả về tiếng kêu của từng loại gia súc. */
string Giasuc::Tieng_keu() {
    return "";
}

/* Phương thức Phanloai
   Đầu vào: Không có tham số đầu vào.
   Đầu ra: Trả về loại gia súc (loai).
   Hoạt động: Trả về thông tin loại gia súc của đối tượng. */
string Giasuc::Phanloai() {
    return loai;
}
