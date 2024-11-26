#ifndef QuanLi_H
#define QuanLi_H
#include <iostream>
#include "NhanVien.h"
using namespace std;

class Quanli : public NhanVien{
    private:
    float ti_le_thuong;
    public:
    Quanli();
    void Nhap();
    void Xuat();
    long long TienThuong() override;
    
};

#endif