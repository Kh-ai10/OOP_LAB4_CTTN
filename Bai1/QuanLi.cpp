#include "QuanLi.h"
#include <iostream>
#include <string>
using namespace std;

/* Constructor Quanli
   Đầu vào: Không có tham số đầu vào.
   Đầu ra: Khởi tạo một đối tượng Quanli với giá trị mặc định:
           - Kế thừa các giá trị mặc định của lớp NhanVien.
           - ti_le_thuong: 0.
   Hoạt động: Gọi constructor của lớp cơ sở (NhanVien) và khởi tạo ti_le_thuong với 0.
*/
    Quanli :: Quanli() : NhanVien(), ti_le_thuong(0){}

/* Phương thức Nhap()
   Đầu vào: Nhập thông tin từ người dùng gồm:
           - Thông tin chung của nhân viên (gọi phương thức Nhap() của lớp NhanVien).
           - Tỷ lệ thưởng (ti_le_thuong).
   Đầu ra: Không có giá trị trả về.
   Hoạt động: Gọi phương thức Nhap() của lớp NhanVien để nhận thông tin cơ bản, 
              sau đó nhập thêm giá trị cho ti_le_thuong từ người dùng.
*/   
    void Quanli :: Nhap(){
        cout << "Nhap thong tin cho quan li: " << "\n";
        NhanVien :: Nhap();
        cout << "Nhap ti le thuong: ";
        cin >> ti_le_thuong;
    }

/* Phương thức Xuat()
   Đầu vào: Không có tham số đầu vào.
   Đầu ra: Không có giá trị trả về.
   Hoạt động: Gọi phương thức Xuat() của lớp NhanVien để in thông tin chung, 
              hiển thị thông tin của đối tượng Quanli.
*/
    void Quanli :: Xuat(){
        cout << "Quan li: " << "\n";
        NhanVien :: Xuat();
    }

/* Phương thức TienThuong()
   Đầu vào: Không có tham số đầu vào.
   Đầu ra: Tiền thưởng của quản lý, tính dựa trên:
           - Tiền thưởng cơ bản từ lớp NhanVien.
           - Tỷ lệ thưởng (ti_le_thuong).
   Hoạt động: Gọi phương thức TienThuong() của lớp NhanVien, 
              nhân kết quả với ti_le_thuong và trả về.
*/
    long long Quanli :: TienThuong(){
        return NhanVien :: TienThuong()*ti_le_thuong; 
    }
    

