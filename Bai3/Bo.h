#ifndef BO_H
#define BO_H
#include <iostream>
# include "Giasuc.h"
using namespace std;


class Bo : public Giasuc {
public:
    Bo();
    int Chosua() override;  
    string Tieng_keu() override;
    void Nhap() override;
};

#endif