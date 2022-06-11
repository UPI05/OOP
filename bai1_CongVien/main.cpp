#include <iostream>
#include "cDSVe.h"

using namespace std;

int n;

int main()
{
	cout << "Nhap so luong ve: ";
	cin >> n;
	cDSVe DSVe(n);
	DSVe.nhap();
	cout << DSVe.tinhTongTienVe() << endl;
	cout << DSVe.demSoLuongVeTungPhan() << endl;
	return 0;
}
