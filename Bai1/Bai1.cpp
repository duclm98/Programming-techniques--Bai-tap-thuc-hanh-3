// Bai1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "MangPhanAn.h"

int main()
{
	MONAN a = { "Burger", 130 };
	MONAN b = { "Cheese burger", 150 };
	MONAN c = { "Chicken burger", 200 };
	MONAN d = { "Drink", 130 };
	MONAN e = { "Potato", 120 };
	MONAN f = { "Ice cream", 160 };

	MONAN* arrMonAnA = new MONAN[3]{ a, d, e };
	MONAN* arrMonAnB = new MONAN[3]{ b, d, e };
	MONAN* arrMonAnC = new MONAN[3]{ c, d, e };
	MONAN* arrMonAnD = new MONAN[4]{ c, d, e, f };

	PHANAN* arrPhanAn = new PHANAN[4]{ {"A", arrMonAnA, 3}, {"B", arrMonAnB, 3}, {"C", arrMonAnC, 3}, {"D", arrMonAnD, 4} };

	bool check = true;
	do
	{
		cout << "Chon mot trong cac phan an sau" << endl;
		XuatMangPhanAn(arrPhanAn, 4);
		int choose;
		cin >> choose;
		switch (choose)
		{
		case 1:
			XuatPhanAnLoai2(*(arrPhanAn));
			break;
		case 2:
			XuatPhanAnLoai2(*(arrPhanAn + 1));
			break;
		case 3:
			XuatPhanAnLoai2(*(arrPhanAn + 2));
			break;
		case 4:
			XuatPhanAnLoai2(*(arrPhanAn + 3));
			break;
		default:
			check = false;
			break;
		}
	} while (check);

	delete[] arrMonAnA;
	delete[] arrMonAnB;
	delete[] arrMonAnC;
	delete[] arrMonAnD;
	delete[] arrPhanAn;

	return 0;
}
