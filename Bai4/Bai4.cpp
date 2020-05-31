// Bai4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Mang.h"



int main()
{
	cout << "Nhap vao so phan tu cua mang: ";
	int n = 0;
	cin >> n;
	int* a = new int[n];
	NhapMang(a, n);
	XuatMang(a, n);

	bool check = true;
	do {
		cout << endl << "Moi chon 1 trong 2 cach sap xep sau" << endl;
		cout << "1: Sap xep tang dan" << endl;
		cout << "2: Sap xep giam dan" << endl;
		int choose = 0;
		cin >> choose;
		switch (choose)
		{
		case 1:
			SapXepTang(a, n);
			XuatMang(a, n);
			break;
		case 2:
			SapXepGiam(a, n);
			XuatMang(a, n);
			break;
		default:
			check = false;
			break;
		}
	} while (check);

	delete[] a;

	return 0;
}
