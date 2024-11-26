#include "SOFITEL.h"
#include "BUSINESS.h"
#include <iostream>
using namespace std;

/* Phương thức khởi tạo không tham số
   Đầu vào: Không có tham số đầu vào.
   Đầu ra: Không có giá trị trả về.
   Hoạt động: Khởi tạo số đêm lưu trú (sodem) với giá trị mặc định là 0. */
BUSINESS::BUSINESS() : SOFITEL() {}

/* Phương thức khởi tạo có tham số
   Đầu vào:
       - so_dem (int): Số đêm lưu trú.
   Đầu ra: Không có giá trị trả về.
   Hoạt động: Khởi tạo số đêm lưu trú (sodem) bằng giá trị được truyền vào. */
BUSINESS::BUSINESS(int so_dem) : SOFITEL(so_dem) {}

/* Phương thức tính doanh thu
   Đầu vào: Không có tham số đầu vào.
   Đầu ra: (int) Giá trị doanh thu tính được, bao gồm:
           - Doanh thu cơ bản (số đêm lưu trú nhân với 300,000 VND).
   Hoạt động: Tính tổng doanh thu dựa trên số đêm lưu trú và trả về kết quả. */
int BUSINESS::DoanhThu() {
    return SOFITEL::DoanhThu() * 300000;
}
