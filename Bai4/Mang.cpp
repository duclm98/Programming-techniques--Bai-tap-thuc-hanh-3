#include "Mang.h"

int tang(const void * a, const void * b)
{
	return (*(int*)a - *(int*)b);
}

int giam(const void * a, const void * b)
{
	return (*(int*)b - *(int*)a);
}

void SapXepTang(int* a, int n) {
	qsort(a, n, sizeof(int), tang);
}

void SapXepGiam(int* a, int n) {
	qsort(a, n, sizeof(int), giam);
}

void NhapMang(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> *(a + i);
	}
}

void XuatMang(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cout << *(a + i) << " ";
	}
	cout << endl;
}