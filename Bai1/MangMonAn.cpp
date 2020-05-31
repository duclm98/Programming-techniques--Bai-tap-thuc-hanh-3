#include "MangMonAn.h"

void XuatMangMonAn(MONAN* a, int n) {
	for (int i = 0; i < n; i++) {
		cout << *(a + i) << " JPY" << endl;
	}
}

void XuatMangTenMonAn(MONAN* a, int n) {
	for (int i = 0; i < n; i++) {
		cout << (a + i)->ten;
		if (i != n - 1) {
			cout << ", ";
		}
	}
}

int TongGiaTriMon(MonAn* a, int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += (a + i)->gia;
	}
	return sum;
}