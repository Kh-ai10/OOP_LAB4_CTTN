#include <iostream>
#include <algorithm>
#include "Giasuc.h"
#include "Bo.h"
#include "De.h"
#include "Cuu.h"

using namespace std;

/* Phương thức Thongke
   Đầu vào: 
   - danhsach_giasuc: Mảng con trỏ chứa các đối tượng gia súc.
   - soluong: Số lượng gia súc trong mảng.
   Đầu ra: Không có giá trị trả về.
   Hoạt động: 
   - Phương thức thống kê thông tin về số lượng con sinh và sữa cho từng loại gia súc (Bò, Cừu, Dê).
   - Đếm số lượng con sinh và lượng sữa cho từng loại gia súc.
   - In ra thông tin tổng hợp cho từng loại gia súc, bao gồm tổng số con (ban đầu + đã sinh) và tổng lượng sữa. */
void Thongke(Giasuc** danhsach_giasuc, int soluong) {
    int tong_con_bo = 0, tong_sua_bo = 0;
    int tong_con_de = 0, tong_sua_de = 0;
    int tong_con_cuu = 0, tong_sua_cuu = 0;

    cout << "\nThong ke theo tung loai gia suc:\n";

    // Thống kê cho Bò
    cout << "Bo: \n";
    int dem_bo = 1;
    for (int i = 0; i < soluong; i++) {
        if (danhsach_giasuc[i]->Phanloai() == "Bo") {
            int so_con_sinh = danhsach_giasuc[i]->Sinhcon();
            int so_sua = danhsach_giasuc[i]->Chosua();

            cout << "Bo " << dem_bo++ << ": Sinh " << so_con_sinh << " con, Cho " << so_sua << " lit sua\n";
            tong_con_bo += so_con_sinh;  
            tong_sua_bo += so_sua;
        }
    }
    cout << "\tTong so bo: " << tong_con_bo + dem_bo - 1 << "\n";
    cout << "\tTong sua bo: " << tong_sua_bo << " lit\n";
    

    // Thống kê cho Cừu
    cout << "Cuu: \n";
    int dem_cuu = 1;
    for (int i = 0; i < soluong; i++) {
        if (danhsach_giasuc[i]->Phanloai() == "Cuu") {
            int so_con_sinh = danhsach_giasuc[i]->Sinhcon();
            int so_sua = danhsach_giasuc[i]->Chosua();

            cout << "Cuu " << dem_cuu++ << ": Sinh " << so_con_sinh << " con, Cho " << so_sua << " lit sua\n";
            tong_con_cuu += so_con_sinh;  
            tong_sua_cuu += so_sua;
        }
    }
    cout << "\tTong so cuu: " << tong_con_cuu + dem_cuu - 1 << "\n";
    cout << "\tTong sua cuu: " << tong_sua_cuu << " lit\n";

    // Thống kê cho Dê
    cout << "De: \n";
    int dem_de = 1;
    for (int i = 0; i < soluong; i++) {
        if (danhsach_giasuc[i]->Phanloai() == "De") {
            int so_con_sinh = danhsach_giasuc[i]->Sinhcon();
            int so_sua = danhsach_giasuc[i]->Chosua();

            cout << "De " << dem_de++ << ": Sinh " << so_con_sinh << " con, Cho " << so_sua << " lit sua\n";
            tong_con_de += so_con_sinh;  
            tong_sua_de += so_sua;
        }
    }
    cout << "\tTong so de: " << tong_con_de + dem_de - 1 << "\n";
    cout << "\tTong sua de: " << tong_sua_de << " lit\n";
}


int main() {
    Bo b;
    De d;
    Cuu c;
    
    b.Nhap();
    c.Nhap();
    d.Nhap();

    int so_luong = b.Laysoluong() + c.Laysoluong() + d.Laysoluong();
    Giasuc** danhsach_giasuc = new Giasuc*[so_luong];
    int chi_so = 0;

    for (int i = 0; i < b.Laysoluong(); i++) {
        danhsach_giasuc[chi_so++] = new Bo();
    }
    for (int i = 0; i < c.Laysoluong(); i++) {
        danhsach_giasuc[chi_so++] = new Cuu();
    }
    for (int i = 0; i < d.Laysoluong(); i++) {
        danhsach_giasuc[chi_so++] = new De();
    }

    // Câu a
    cout << "Chu di vang, nhung tieng keu nghe duoc la: ";
    for (int i = 0; i < so_luong; i++) {
        cout << danhsach_giasuc[i]->Tieng_keu();
    }
    cout << "\n";

    // Câu b
    cout << "\n~%~~ THONG TIN GIA SUC ~~%~\n" ;
    Thongke(danhsach_giasuc, so_luong);

    for (int i = 0; i < so_luong; i++) {
        delete danhsach_giasuc[i];
    }
    delete[] danhsach_giasuc;

    return 0;
}
