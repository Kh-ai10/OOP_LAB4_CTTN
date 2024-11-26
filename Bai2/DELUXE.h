#ifndef DELUXE_H
#define DELUXE_H
#include <iostream>
#include "SOFITEL.h"
using namespace std;

class DELUXE : public SOFITEL{
    private:
        int phi_dich_vu, phi_phuc_vu;
    public:
        DELUXE();
        DELUXE(int so_dem, int phi_dv, int phi_pv);
        int DoanhThu(); 
};

#endif