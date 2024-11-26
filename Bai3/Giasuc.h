#ifndef GIASUC_H
#define GIASUC_H
#include <iostream>
using namespace std;

class Giasuc { 
protected:
    int soluong;
    string loai;

public:
    Giasuc(); 
    virtual void Nhap();
    virtual string Tieng_keu();
    virtual int Chosua();
    int Sinhcon(); 
    int Laysoluong() const;
    string Phanloai();
};


#endif
