#include <iostream>
#include "cNhanVien.h"
#include "cLapTrinhVien.h"
#include "cKiemChungVien.h"
#include "cDSNhanVien.h"

using namespace std;

cDSNhanVien::cDSNhanVien(int x) {
    soLuongNhanVien = x;
}

void cDSNhanVien::nhap() {
    bool typeOfNV;
    for (int i = 0; i < soLuongNhanVien; i++) {
        cout << "Nhap loai nhan vien (0 la lap trinh vien, 1 la kiem chung vien): ";
        cin >> typeOfNV;
        if (typeOfNV) {
            DSNV[i] = new cKiemChungVien;
        } else {
            DSNV[i] = new cLapTrinhVien;
        }
        DSNV[i]->nhap();
        DSNV[i]->setLoaiNV(typeOfNV);
    }
}

void cDSNhanVien::lietKe() {
    double tongLuong = 0;
    for (int i = 0; i < soLuongNhanVien; i++) {
        if (DSNV[i]->getLuong() == -1) DSNV[i]->tinhLuong();
        tongLuong += DSNV[i]->getLuong();
    }
    double luongTB = tongLuong / soLuongNhanVien;
    cout << "Luon tb: " << luongTB << endl;
    for (int i = 0; i < soLuongNhanVien; i++) {
        cout << DSNV[i]->getLuong() << "l" << endl;
        if (DSNV[i]->getLuong() < luongTB) DSNV[i]->xuat();
    }
}

cDSNhanVien::~cDSNhanVien() {
    delete[] DSNV;
}
