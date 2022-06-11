#include <iostream>
#include "cVeTungPhan.h"

using namespace std;

cVeTungPhan::cVeTungPhan() {

}

void cVeTungPhan::nhap() {
    cVe::nhap();
    cout << "Nhap so tro choi: ";
    cin >> soTroChoi;
}

int cVeTungPhan::tinhTien() {
    int tienVe = 70000 + 20000 * soTroChoi;
    setTienVe(tienVe);
    return tienVe;
}

cVeTungPhan::~cVeTungPhan() {

}