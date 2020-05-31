#include "SinhVien.h"

istream& operator>>(istream& inDev, SINHVIEN& sv) {
	cout << "Nhap ma so sinh vien: ";
	inDev >> sv.mssv;
	cout << "Nhap ten sinh vien: ";
	inDev >> sv.mssv;
	cout << "Nhap diem toan: ";
	inDev >> sv.toan;
	cout << "Nhap diem van: ";
	inDev >> sv.van;
	inDev.ignore();
	return inDev;
}

ostream& operator<<(ostream& outDev, SINHVIEN& sv) {
	outDev << sv.mssv << " " << sv.ten << " " << sv.toan << " " << sv.van;
	return outDev;
}