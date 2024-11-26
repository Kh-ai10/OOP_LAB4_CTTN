#include "Giasuc.h"
#include "Bo.h"
#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;

/* Phương thức khởi tạo không tham số
   Đầu vào: Không có tham số đầu vào.
   Đầu ra: Không có giá trị trả về.
   Hoạt động: Khởi tạo đối tượng Bo với số lượng mặc định là 0 
              và gán loại là "Bo". */
Bo::Bo() : Giasuc() {
    loai = "Bo";
}

/* Phương thức Chosua
   Đầu vào: Không có tham số đầu vào.
   Đầu ra: Trả về một số nguyên đại diện cho lượng sữa bò cho, nằm trong khoảng từ 0 đến 20.
   Hoạt động: Sử dụng số ngẫu nhiên để tính lượng sữa bò cho, 
              đảm bảo giá trị không vượt quá 20. */
int Bo::Chosua() {
    srand(time(0) + rand());
    return Giasuc::Chosua() % 21;
}

/* Phương thức Tieng_keu
   Đầu vào: Không có tham số đầu vào.
   Đầu ra: Trả về một chuỗi biểu thị tiếng kêu của bò ("Um boo").
   Hoạt động: Cung cấp tiếng kêu đặc trưng của loài bò. */
string Bo::Tieng_keu() {
    return "Um boo ";
}

/* Phương thức Nhap
   Đầu vào: Nhập số lượng bò từ người dùng.
   Đầu ra: Không có giá trị trả về.
   Hoạt động: Gọi phương thức Nhap() từ lớp cơ sở để nhập số lượng 
              và gán thông tin liên quan đến bò. */
void Bo::Nhap() {
    cout << "Nhap so luong bo: ";
    Giasuc::Nhap();    
}
