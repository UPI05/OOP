#include <iostream>
#include "cVeTronGoi.h"
#include "cVeTungPhan.h"
#include "cVe.h"
#include "cDSVe.h"

using namespace std;

cDSVe::cDSVe(int x) {
    soLuongVe = x;
}

void cDSVe::nhap() {
    bool typeOfVe;
    for (int i = 0; i < soLuongVe; i++) {
        cout << "Nhap loai ve (0 la ve tron goi, 1 la ve tung phan): ";
        cin >> typeOfVe;
        if (typeOfVe) {
            DSVe[i] = new cVeTungPhan;
        } else {
            DSVe[i] = new cVeTronGoi;
        }
        DSVe[i]->setLoaiVe(typeOfVe);
        DSVe[i]->nhap();
    }
}

long long cDSVe::tinhTongTienVe() {
    long long tongTien = 0;
    for (int i = 0; i < soLuongVe; i++) {
        if (DSVe[i]->getTienVe() == -1) DSVe[i]->tinhTien();
        tongTien += DSVe[i]->getTienVe();
    }
    return tongTien;
}

int cDSVe::demSoLuongVeTungPhan() {
    int cnt = 0;
    for (int i = 0; i < soLuongVe; i++) {
        if (DSVe[i]->getLoaiVe() == 1) cnt++;
    }
    return cnt;
}

cDSVe::~cDSVe() {
    delete[] DSVe;
}
