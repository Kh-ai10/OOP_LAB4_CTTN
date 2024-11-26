#ifndef DE_H
#define DE_H
#include <iostream>
#include "Giasuc.h"
using namespace std;


class De : public Giasuc {
public:
    De();
    int Chosua() override;
    string Tieng_keu() override;
    void Nhap() override;
};

#endif
