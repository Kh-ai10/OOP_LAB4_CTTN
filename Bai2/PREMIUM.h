#ifndef PREMIUM_H
#define PREMIUM_H
#include <iostream>
#include "SOFITEL.h"
using namespace std;


class PREMIUM : public SOFITEL{
    private:
        int phi_dich_vu;
    public:
        PREMIUM();
        PREMIUM(int so_dem, int phi_dv);
        int DoanhThu(); 
};

#endif