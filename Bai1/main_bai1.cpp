#include "QuanLi.h"
#include "KySu.h"
#include "NhanVien.h"
#include <iostream>
using namespace std;

int main(){
    Quanli ql;
    Kysu ks;
    ql.Nhap();
    ks.Nhap();

    cout << "\n~%~~~ THONG TIN NHAN VIEN ~~~%~\n";
    ql.Xuat();
    ks.Xuat();
       
}