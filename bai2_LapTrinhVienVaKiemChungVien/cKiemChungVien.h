#pragma once

#include <iostream>
#include "cNhanVien.h"

using namespace std;

class cKiemChungVien: public cNhanVien {
    private:
        int soLoiPhatHien;
    public:
        cKiemChungVien();
        void nhap();
        void xuat();
        int tinhLuong();
        ~cKiemChungVien();
};