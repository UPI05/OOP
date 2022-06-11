#include <iostream>
#include "cKiemChungVien.h"
#include "cNhanVien.h"

using namespace std;

cKiemChungVien::cKiemChungVien() {
    
}

void cKiemChungVien::nhap() {
    cNhanVien::nhap();
    cout << "Nhap so loi phat hien: ";
    cin >> soLoiPhatHien;
}

void cKiemChungVien::xuat() {
    cNhanVien::xuat();
    cout << "So loi phat hien: " << soLoiPhatHien << endl;
}

int cKiemChungVien::tinhLuong() {
    int luong = luongCB + soLoiPhatHien * 50000;
    setLuong(luong);
    return luong;
}

cKiemChungVien::~cKiemChungVien() {

}