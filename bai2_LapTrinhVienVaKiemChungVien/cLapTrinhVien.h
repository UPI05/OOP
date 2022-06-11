#pragma once

#include <iostream>
#include "cNhanVien.h"

using namespace std;

class cLapTrinhVien: public cNhanVien {
    private:
        int soGioOT;
    public:
        cLapTrinhVien();
        void nhap();
        void xuat();
        int tinhLuong();
        ~cLapTrinhVien();
};