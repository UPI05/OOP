#pragma once

#include <iostream>
#include "cVe.h"

using namespace std;

class cVeTungPhan: public cVe {
    protected:
        int soTroChoi;
    public:
        cVeTungPhan();
        void nhap();
        int tinhTien();
        ~cVeTungPhan();
};