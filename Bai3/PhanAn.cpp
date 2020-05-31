#include "PhanAn.h"

void XuatPhanAnLoai1(PHANAN& pa) {
	cout << "Phan an " << pa.ten << " (";
	XuatMangTenMonAn(pa.a);
	cout << ")";
}

void XuatPhanAnLoai2(PHANAN& pa) {
	cout << "******** Phan an " << pa.ten << " ********" << endl;
	XuatMangMonAn(pa.a);
	cout << "===========================" << endl;
	int sum = TongGiaTriMon(pa.a);
	cout << "Tong gia tri mon: " << sum << " JPY" << endl;
	cout << "Gia tri phan an: " << sum - sum * 0.1 << " JPY" << endl;
	cout << "***************************" << endl << endl;
}