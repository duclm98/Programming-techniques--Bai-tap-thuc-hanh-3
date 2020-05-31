#pragma once
#include "MangMonAn.h"

struct PhanAn
{
	string ten;
	MONAN* a;
	int n;
};
typedef struct PhanAn PHANAN;

void XuatPhanAnLoai1(PHANAN& pa);
void XuatPhanAnLoai2(PHANAN& pa);