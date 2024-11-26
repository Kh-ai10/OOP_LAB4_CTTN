#include "KySu.h"
#include <iostream>
#include <string>
using namespace std;

/* Constructor Kysu
   Đầu vào: Không có tham số đầu vào.
   Đầu ra: Khởi tạo một đối tượng Kysu với giá trị mặc định:
           - Kế thừa các giá trị mặc định của lớp NhanVien.
           - so_gio_lam_them: 0.
   Hoạt động: Gọi constructor của lớp cơ sở (NhanVien) và khởi tạo so_gio_lam_them là 0.
*/
    Kysu :: Kysu() : NhanVien(), so_gio_lam_them(0){}

/* Phương thức Nhap()
   Đầu vào: Nhập thông tin từ người dùng gồm:
           - Thông tin chung của nhân viên (gọi phương thức Nhap() của lớp NhanVien).
           - Số giờ làm thêm (so_gio_lam_them).
   Đầu ra: Không có giá trị trả về.
   Hoạt động: Gọi phương thức Nhap() của lớp NhanVien để nhận thông tin cơ bản, sau đó nhập thêm giá trị cho so_gio_lam_them từ người dùng.
*/
    void Kysu :: Nhap(){
        cout << "Nhap thong tin cho ky su: \n";
        NhanVien :: Nhap();
        cout << "Nhap so gio lam them: ";
        cin >> so_gio_lam_them;
    }

/* Phương thức Xuat()
   Đầu vào: Không có tham số đầu vào.
   Đầu ra: Không có giá trị trả về.
   Hoạt động: Gọi phương thức Xuat() của lớp NhanVien để in thông tin chung, hiển thị thông tin của đối tượng Kysu.
*/
    void Kysu :: Xuat(){
        cout << "\nKy su: " << "\n";
        NhanVien :: Xuat();
    }

/* Phương thức TienThuong()
   Đầu vào: Không có tham số đầu vào.
   Đầu ra: Tiền thưởng của kỹ sư, tính dựa trên:
           - Số giờ làm thêm (so_gio_lam_them).
           - Hệ số thưởng cố định là 100,000 đồng/giờ.
   Hoạt động: Nhân số giờ làm thêm (so_gio_lam_them) với hệ số 100,000 và trả về kết quả.
*/
    long long Kysu :: TienThuong(){
        return 100000*so_gio_lam_them;
    }
    







