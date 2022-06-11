#include <iostream>
#include "cNhanVien.h"

using namespace std;

cNhanVien::cNhanVien() {
    luong = -1;
}

void cNhanVien::nhap() {
    cout << "Nhap ma nhan vien: ";
    cin >> maNV;
    cout << "Nhap ho ten: ";
    cin.ignore();
    getline(cin, hoTen);
    cout << "Nhap tuoi: ";
    cin >> tuoi;
    cout << "Nhap sdt: ";
    cin >> soDt;
    cout << "Nhap email: ";
    cin >> email;
    cout << "Nhap luong co ban: ";
    cin >> luongCB;
}

void cNhanVien::xuat() {
    cout << "Ma nhan vien: " << maNV << endl;
    cout << "Ho ten: " << hoTen << endl;
    cout << "Tuoi: " << tuoi << endl;
    cout << "So dien thoai: " << soDt << endl;
    cout << "Email: " << email << endl;
    cout << "Luong co ban: " << luongCB << endl;
}

void cNhanVien::setLoaiNV(bool x) {
    loaiNV = x;
}

bool cNhanVien::getLoaiNV() {
    return loaiNV;
}

void cNhanVien::setLuong(int x) {
    luong = x;
}

int cNhanVien::getLuong() {
    return luong;
}

cNhanVien::~cNhanVien() {
    
}