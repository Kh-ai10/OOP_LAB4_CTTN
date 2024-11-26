#include "Giasuc.h"
#include "De.h"
#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;

/* Phương thức khởi tạo không tham số
   Đầu vào: Không có tham số đầu vào.
   Đầu ra: Không có giá trị trả về.
   Hoạt động: Khởi tạo đối tượng De với số lượng mặc định là 0 
              và gán loại là "De". */
De::De() : Giasuc() {
    loai = "De";
}

/* Phương thức Chosua
   Đầu vào: Không có tham số đầu vào.
   Đầu ra: Trả về một số nguyên đại diện cho lượng sữa dê cho, nằm trong khoảng từ 0 đến 10.
   Hoạt động: Sử dụng số ngẫu nhiên để tính lượng sữa dê cho, 
              đảm bảo giá trị không vượt quá 10. */
int De::Chosua() {
    srand(time(0) + rand());
    return Giasuc::Chosua() % 11;
}

/* Phương thức Tieng_keu
   Đầu vào: Không có tham số đầu vào.
   Đầu ra: Trả về một chuỗi biểu thị tiếng kêu của dê ("Eeee").
   Hoạt động: Cung cấp tiếng kêu đặc trưng của loài dê. */
string De::Tieng_keu() {
    return "Eeee ";
}

/* Phương thức Nhap
   Đầu vào: Nhập số lượng dê từ người dùng.
   Đầu ra: Không có giá trị trả về.
   Hoạt động: Gọi phương thức Nhap() từ lớp cơ sở để nhập số lượng 
              và gán thông tin liên quan đến dê. */
void De::Nhap() {
    cout << "Nhap so luong de: ";
    Giasuc::Nhap();    
}
