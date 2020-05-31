#pragma once
#include <iostream>
using namespace std;

struct SinhVien
{
	char* ten = new char[50];
	int mssv;
	float toan, van;
};
typedef struct SinhVien SINHVIEN;

istream& operator>>(istream& inDev, SINHVIEN& sv);
ostream& operator<<(ostream& outDev, SINHVIEN& sv);