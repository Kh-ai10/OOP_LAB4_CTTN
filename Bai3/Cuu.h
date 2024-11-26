#ifndef CUU_H
#define CUU_H
#include <iostream>
#include "Giasuc.h"
using namespace std;


class Cuu : public Giasuc {
public:
    Cuu();
    int Chosua() override;
    string Tieng_keu() override;
    void Nhap() override;
};

#endif
