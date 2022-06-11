#pragma once

#include <iostream>

using namespace std;

class cNhanVien {
    protected:
        string maNV, hoTen, soDt, email;
        int tuoi, luongCB, luong;
        bool loaiNV;
    public:
        cNhanVien();
        virtual void nhap();
        virtual void xuat();
        virtual void setLoaiNV(bool);
        virtual bool getLoaiNV();
        virtual void setLuong(int);
        virtual int getLuong();
        virtual int tinhLuong() = 0;
        ~cNhanVien();
};