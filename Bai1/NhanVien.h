#ifndef NhanVien_H
#define NhanVien_H
#include <iostream>
using namespace std;

class NhanVien{
    private:
    string maso, ten;
    unsigned long long luong_co_ban;
    public:
    NhanVien();
    void Nhap();
    void Xuat();
    virtual long long TienThuong();
};

#endif