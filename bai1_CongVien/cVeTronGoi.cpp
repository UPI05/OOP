#include <iostream>
#include "cVeTronGoi.h"

using namespace std;

cVeTronGoi::cVeTronGoi() {

}

void cVeTronGoi::nhap() {
    cVe::nhap();
}

int cVeTronGoi::tinhTien() {
    setTienVe(200000);
    return 200000;
}

cVeTronGoi::~cVeTronGoi() {

}