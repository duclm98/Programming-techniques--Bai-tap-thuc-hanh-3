#include "MangPhanAn.h"

void XuatMangPhanAn(PHANAN* a, int n) {
	for (int i = 0; i < n; i++) {
		cout << i + 1 << ": ";
		XuatPhanAnLoai1(*(a + i));
		cout << endl;
	}
}