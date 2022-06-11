#pragma once

#include <iostream>
#include "cVe.h"

using namespace std;

class cVeTronGoi: public cVe {
    protected:
    
    public:
        cVeTronGoi();
        void nhap();
        int tinhTien();
        ~cVeTronGoi();
};