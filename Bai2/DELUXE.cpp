#include "SOFITEL.h"
#include "DELUXE.h"
#include <iostream>
using namespace std;

/* Phương thức khởi tạo mặc định
   Đầu vào: Không có tham số đầu vào.
   Đầu ra: Không có giá trị trả về.
   Hoạt động: Gọi constructor của lớp cơ sở SOFITEL để khởi tạo số đêm mặc định, 
              và gán giá trị mặc định 0 cho các thành phần phi_dich_vu và phi_phuc_vu. */
DELUXE :: DELUXE() : SOFITEL(), phi_dich_vu(0), phi_phuc_vu(0) {}

/* Phương thức khởi tạo có tham số
   Đầu vào: 
       - so_dem (int): Số đêm lưu trú.
       - phi_dv (int): Phí dịch vụ.
       - phi_pv (int): Phí phục vụ.
   Đầu ra: Không có giá trị trả về.
   Hoạt động: Gọi constructor của lớp cơ sở SOFITEL để khởi tạo số đêm,
              đồng thời khởi tạo giá trị cho các thành phần phi_dich_vu và phi_phuc_vu. */
DELUXE :: DELUXE(int so_dem, int phi_dv, int phi_pv) 
    : SOFITEL(so_dem), phi_dich_vu(phi_dv), phi_phuc_vu(phi_pv) {}

/* Phương thức tính doanh thu
   Đầu vào: Không có tham số đầu vào.
   Đầu ra: (int) Giá trị doanh thu tính được.
   Hoạt động: 
       - Tính doanh thu dựa trên số đêm lưu trú (từ lớp cơ sở SOFITEL),
         nhân với hệ số giá phòng (750,000).
       - Cộng thêm phí dịch vụ và phí phục vụ.
       - Trả về kết quả doanh thu tính được. */
int DELUXE :: DoanhThu() {
    return SOFITEL::DoanhThu() * 750000 + phi_dich_vu + phi_phuc_vu;
}
