#include <iostream>
#include "cVe.h"

using namespace std;

cVe::cVe() {
    tienVe = -1;
}

void cVe::nhap() {
    cout << "Nhap ma ve: ";
    cin >> maVe;
    cout << "Nhap ho ten: ";
    cin.ignore();
    getline(cin, hoTen);
    cout << "Nhap nam sinh: ";
    cin >> namSinh;
}

void cVe::setLoaiVe(int x) {
    loaiVe = x;
}

int cVe::getLoaiVe() {
    return loaiVe;
}

void cVe::setTienVe(int x) {
    tienVe = x;
}

int cVe::getTienVe() {
    return tienVe;
}

cVe::~cVe() {

}