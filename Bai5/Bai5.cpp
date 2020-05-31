// Bai5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "MangSinhVien.h"

int main()
{
	cout << "Nhap so luong sinh vien: ";
	int n = 0;
	cin >> n;
	SINHVIEN* a = new SINHVIEN[n];
	NhapMangSinhVien(a, n);
	XuatMangSinhVien(a, n);
	SapXepTang(a, n);
	XuatMangSinhVien(a, n);
	SapXepGiam(a, n);
	XuatMangSinhVien(a, n);
	return 0;
}