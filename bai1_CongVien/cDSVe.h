#pragma once

#include <iostream>
#include "cVeTronGoi.h"
#include "cVeTungPhan.h"
#include "cVe.h"

using namespace std;

class cDSVe {
    private:
        int soLuongVe;
        cVe *DSVe[100009];
    public:
        cDSVe(int = 0);
        void nhap();
        long long tinhTongTienVe();
        int demSoLuongVeTungPhan();
        ~cDSVe();
};