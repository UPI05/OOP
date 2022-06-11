#pragma once

#include <iostream>
#include "cNhanVien.h"
#include "cLapTrinhVien.h"
#include "cKiemChungVien.h"

using namespace std;

class cDSNhanVien {
    private:
        int soLuongNhanVien;
        cNhanVien *DSNV[100009];
    public:
        cDSNhanVien(int = 0);
        void nhap();
        void lietKe();
        ~cDSNhanVien();
};