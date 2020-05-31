#include "MangSinhVien.h"

int tang(const void* a, const void* b)
{
	SINHVIEN a1 = *(SINHVIEN*)a;
	SINHVIEN b1 = *(SINHVIEN*)b;
	return a1.mssv - b1.mssv;
}

int giam(const void* a, const void* b)
{
	SINHVIEN a1 = *(SINHVIEN*)a;
	SINHVIEN b1 = *(SINHVIEN*)b;
	return b1.mssv - a1.mssv;
}

void SapXepTang(SINHVIEN* a, int n) {
	qsort(a, n, sizeof(SINHVIEN), tang);
}

void SapXepGiam(SINHVIEN* a, int n) {
	qsort(a, n, sizeof(SINHVIEN), giam);
}

void NhapMangSinhVien(SINHVIEN* a, int n) {
	for (int i = 0; i < n; i++) {
		cout << "Nhap sinh vien thu " << i + 1 << ": " << endl;
		cin >> *(a + i);
	}
}

void XuatMangSinhVien(SINHVIEN* a, int n) {
	for (int i = 0; i < n; i++) {
		cout << *(a + i);
	}
	cout << endl;
}