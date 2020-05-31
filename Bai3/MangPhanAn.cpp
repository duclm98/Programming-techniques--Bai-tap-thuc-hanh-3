#include "MangPhanAn.h"

void XuatMangPhanAn(vector<PHANAN>a) {
	for (int i = 0; i < a.size(); i++) {
		cout << i + 1 << ": ";
		XuatPhanAnLoai1(a.at(i));
		cout << endl;
	}
}