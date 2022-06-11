#include <iostream>
#include "cDSNhanVien.h"

using namespace std;

int n;

int main()
{
	cout << "Nhap so luong nhan vien: ";
	cin >> n;
	cDSNhanVien DSNV(n);
	DSNV.nhap();
	DSNV.lietKe();

	return 0;
}