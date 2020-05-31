#pragma once
#include "MangMonAn.h"

struct PhanAn
{
	string ten;
	vector<MONAN>a;
};
typedef struct PhanAn PHANAN;

void XuatPhanAnLoai1(PHANAN& pa);
void XuatPhanAnLoai2(PHANAN& pa);