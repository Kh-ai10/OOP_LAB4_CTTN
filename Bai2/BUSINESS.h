#ifndef BUSINESS_H
#define BUSINESS_H
#include <iostream>
#include "SOFITEL.h"
using namespace std;


class BUSINESS : public SOFITEL{
    public:
        BUSINESS();
        BUSINESS(int so_dem);
        int DoanhThu(); 
};
#endif