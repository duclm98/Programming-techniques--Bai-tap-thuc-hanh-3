#include "MangMonAn.h"

void XuatMangMonAn(vector<MONAN>a) {
	for (int i = 0; i < a.size(); i++) {
		cout << a.at(i) << endl;
	}
}
void XuatMangTenMonAn(vector<MONAN>a) {
	for (int i = 0; i < a.size(); i++) {
		cout << a.at(i).ten;
		if (i != a.size()-1) {
			cout << ", ";
		}
	}
}
int TongGiaTriMon(vector<MONAN>a) {
	int sum = 0;
	for (int i = 0; i < a.size(); i++) {
		sum += a.at(i).gia;
	}
	return sum;
}