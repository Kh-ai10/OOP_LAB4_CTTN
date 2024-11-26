#include "NhanVien.h"
#include <iostream>
#include <string>
using namespace std;

/* Constructor NhanVien
   Đầu vào: Không có tham số đầu vào.
   Đầu ra: Khởi tạo một đối tượng NhanVien với giá trị mặc định:
           - maso: chuỗi rỗng
           - ten: chuỗi rỗng
           - luong_co_ban: 0.0
   Hoạt động: Gán giá trị mặc định cho các thành viên của lớp.
*/
    NhanVien :: NhanVien() : maso(""), ten(""), luong_co_ban(0.0){}

/* Phương thức Nhap()
   Đầu vào: Nhập thông tin từ người dùng gồm:
           - Mã số nhân viên (maso)
           - Tên nhân viên (ten)
           - Lương cơ bản (luong_co_ban)
   Đầu ra: Không có giá trị trả về.
   Hoạt động: Nhận dữ liệu từ người dùng và gán vào các thuộc tính tương ứng của đối tượng.
*/
    void  NhanVien :: Nhap(){
        cout << "Nhap ma so nhan vien: ";
        cin >> maso;
        cout << "Nhap ten nhan vien: ";
        cin >> ten;
        cout << "Nhap luong co ban cho nhan vien: ";
        cin >> luong_co_ban;
    }

/* Phương thức Xuat()
   Đầu vào: Không có tham số đầu vào.
   Đầu ra: Không có giá trị trả về.
   Hoạt động: In ra thông tin của nhân viên, bao gồm:
           - Mã số nhân viên
           - Tên nhân viên
           - Lương cơ bản
           - Tiền thưởng (gọi phương thức TienThuong)
*/
    void NhanVien :: Xuat(){
        cout << "\tMa so nhan vien: " << maso << "\n";
        cout << "\tTen nhan vien: " << ten << "\n";
        cout << "\tLuong co ban: " << luong_co_ban << "\n";
        cout << "\tTien Thuong: " << TienThuong() << "\n";
    }

/* Phương thức TienThuong()
   Đầu vào: Không có tham số đầu vào.
   Đầu ra: Tiền thưởng của nhân viên, tính dựa trên lương cơ bản.
           Giá trị mặc định trả về là lương cơ bản.
   Hoạt động: Trả về giá trị lương cơ bản như tiền thưởng mặc định.
*/
    long long NhanVien :: TienThuong(){
        return luong_co_ban;
    };








