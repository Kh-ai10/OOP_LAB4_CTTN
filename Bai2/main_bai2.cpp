#include "SOFITEL.h"
#include "DELUXE.h"
#include "PREMIUM.h"
#include "BUSINESS.h"

#include <iostream>
using namespace std;

int main() {
    // PREMIUM cao nhất
    DELUXE Khai(1, 150000, 20000);
    DELUXE Thai(1, 150000, 20000);
    BUSINESS Luc(3);
    PREMIUM Phong(5, 120000);
    PREMIUM Trung(6, 120000);

    /* DELUXE cao nhất
        DELUXE Khai(3, 250000, 50000);
    DELUXE Thai(4, 250000, 50000);
    BUSINESS Luc(5);
    PREMIUM Phong(2, 150000);
    PREMIUM Trung(1, 150000);
    */

   /* BUSINESS cao nhất
    DELUXE Khai(1, 100000, 20000);
    DELUXE Thai(1, 100000, 20000);
    BUSINESS Luc(10);
    PREMIUM Phong(2, 50000);
    PREMIUM Trung(1, 50000);
   */

    // Tính tổng doanh thu cho từng loại phòng
    int doanhthu_deluxe = Khai.DoanhThu() + Thai.DoanhThu();
    int doanhthu_business = Luc.DoanhThu();
    int doanhthu_premium = Phong.DoanhThu() + Trung.DoanhThu();

    // Xác định doanh thu lớn nhất và loại phòng tương ứng
    int doanhthu_lonnhat = doanhthu_premium;
    string loai_phong = "PREMIUM";

    if (doanhthu_deluxe > doanhthu_lonnhat) {
        doanhthu_lonnhat = doanhthu_deluxe;
        loai_phong = "DELUXE";
    }
    if (doanhthu_business > doanhthu_lonnhat) {
        doanhthu_lonnhat = doanhthu_business;
        loai_phong = "BUSINESS";
    }

    // In ra loại phòng có doanh thu lớn nhất
    cout << "Doanh thu loai phong DELUXE: " << doanhthu_deluxe << " VND" << "\n";
    cout << "Doanh thu loai phong PREMIUM: " << doanhthu_premium << " VND" << "\n";
    cout << "Doanh thu loai phong BUSINESS: " << doanhthu_business << " VND" << "\n";
    cout << "Doanh thu lon nhat la " << loai_phong << "\n";

    return 0;
}
