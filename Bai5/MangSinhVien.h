#pragma once
#include "SinhVien.h"

int tang(const void* a, const void* b);
int giam(const void* a, const void* b);
void SapXepTang(SINHVIEN* a, int n);
void SapXepGiam(SINHVIEN* a, int n);
void NhapMangSinhVien(SINHVIEN* a, int n);
void XuatMangSinhVien(SINHVIEN* a, int n);