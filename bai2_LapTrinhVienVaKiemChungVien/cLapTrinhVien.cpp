#include <iostream>
#include "cLapTrinhVien.h"
#include "cNhanVien.h"

using namespace std;

cLapTrinhVien::cLapTrinhVien() {
    
}

void cLapTrinhVien::nhap() {
    cNhanVien::nhap();
    cout << "Nhap so gio OT: ";
    cin >> soGioOT;
}

void cLapTrinhVien::xuat() {
    cNhanVien::xuat();
    cout << "So gio OT: " << soGioOT << endl;
}

int cLapTrinhVien::tinhLuong() {
    int luong = luongCB + soGioOT * 200000;
    setLuong(luong);
    return luong;
}

cLapTrinhVien::~cLapTrinhVien() {

}