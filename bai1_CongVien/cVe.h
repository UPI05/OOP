#pragma once

#include <iostream>

using namespace std;

class cVe {
    protected:
        string maVe;
        string hoTen;
        int namSinh;
        int tienVe;
        int loaiVe;
    public:
        cVe();
        virtual void nhap();
        virtual int tinhTien() = 0;
        virtual void setLoaiVe(int);
        virtual int getLoaiVe();
        virtual void setTienVe(int);
        virtual int getTienVe();
        ~cVe();
};