#include "SOFITEL.h"
#include "PREMIUM.h"
#include <iostream>
using namespace std;

/* Phương thức khởi tạo mặc định
   Đầu vào: Không có tham số đầu vào.
   Đầu ra: Không có giá trị trả về.
   Hoạt động: Khởi tạo số đêm lưu trú (sodem) với giá trị mặc định là 0 và phí dịch vụ (phi_dich_vu) là 0. */
PREMIUM::PREMIUM() : SOFITEL(), phi_dich_vu(0) {}

/* Phương thức khởi tạo có tham số
   Đầu vào:
       - so_dem (int): Số đêm lưu trú.
       - phi_dv (int): Phí dịch vụ.
   Đầu ra: Không có giá trị trả về.
   Hoạt động: Khởi tạo số đêm lưu trú (sodem) và phí dịch vụ (phi_dich_vu) bằng các giá trị được truyền vào. */
PREMIUM::PREMIUM(int so_dem, int phi_dv) : SOFITEL(so_dem), phi_dich_vu(phi_dv) {}

/* Phương thức tính doanh thu
   Đầu vào: Không có tham số đầu vào.
   Đầu ra: (int) Giá trị doanh thu tính được, bao gồm:
           - Doanh thu cơ bản (số đêm lưu trú nhân với 500,000 VND).
           - Phí dịch vụ (phi_dich_vu).
   Hoạt động: Tính tổng doanh thu dựa trên số đêm lưu trú và phí dịch vụ, sau đó trả về kết quả. */
int PREMIUM::DoanhThu() {
    return SOFITEL::DoanhThu() * 500000 + phi_dich_vu;
}
