#include "SOFITEL.h"
#include <iostream>
using namespace std;

/* Phương thức khởi tạo mặc định
   Đầu vào: Không có tham số đầu vào.
   Đầu ra: Không có giá trị trả về.
   Hoạt động: Khởi tạo số đêm lưu trú (sodem) với giá trị mặc định là 0. */
SOFITEL::SOFITEL() : sodem(0) {}

/* Phương thức khởi tạo có tham số
   Đầu vào: 
       - so_dem (int): Số đêm lưu trú.
   Đầu ra: Không có giá trị trả về.
   Hoạt động: Khởi tạo số đêm lưu trú (sodem) bằng giá trị được truyền vào. */
SOFITEL::SOFITEL(int so_dem) : sodem(so_dem) {}

/* Phương thức tính doanh thu
   Đầu vào: Không có tham số đầu vào.
   Đầu ra: (int) Giá trị doanh thu tính được, dựa trên số đêm lưu trú.
   Hoạt động: Trả về số đêm lưu trú (sodem) làm giá trị doanh thu cơ bản. */
int SOFITEL::DoanhThu() {
    return sodem;
}
