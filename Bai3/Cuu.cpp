#include "Giasuc.h"
#include "Cuu.h"
#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;

/* Phương thức khởi tạo không tham số
   Đầu vào: Không có tham số đầu vào.
   Đầu ra: Không có giá trị trả về.
   Hoạt động: Khởi tạo đối tượng Cuu với số lượng mặc định là 0 
              và gán loại là "Cuu". */
Cuu::Cuu() : Giasuc() {
    loai = "Cuu";
}

/* Phương thức Chosua
   Đầu vào: Không có tham số đầu vào.
   Đầu ra: Trả về một số nguyên đại diện cho lượng sữa cừu cho, nằm trong khoảng từ 0 đến 5.
   Hoạt động: Sử dụng số ngẫu nhiên để tính lượng sữa cừu cho, 
              đảm bảo giá trị không vượt quá 5. */
int Cuu::Chosua() {
    srand(time(0) + rand());
    return Giasuc::Chosua() % 6;
}

/* Phương thức Tieng_keu
   Đầu vào: Không có tham số đầu vào.
   Đầu ra: Trả về một chuỗi biểu thị tiếng kêu của cừu ("Beee").
   Hoạt động: Cung cấp tiếng kêu đặc trưng của loài cừu. */
string Cuu::Tieng_keu() {
    return "Beee ";
}

/* Phương thức Nhap
   Đầu vào: Nhập số lượng cừu từ người dùng.
   Đầu ra: Không có giá trị trả về.
   Hoạt động: Gọi phương thức Nhap() từ lớp cơ sở để nhập số lượng 
              và gán thông tin liên quan đến cừu. */
void Cuu::Nhap() {
    cout << "Nhap so luong cuu: ";
    Giasuc::Nhap();   
}
