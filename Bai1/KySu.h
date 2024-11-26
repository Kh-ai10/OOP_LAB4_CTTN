#ifndef KySu_H
#define KySu_H
#include <iostream>
#include "NhanVien.h"
using namespace std;


class Kysu : public NhanVien{
    private:
    float so_gio_lam_them;
    public:
    Kysu();
    void Nhap();
    void Xuat();
    long long TienThuong() override;
    
};
#endif