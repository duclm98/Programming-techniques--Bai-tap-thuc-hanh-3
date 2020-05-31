// Bai3.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

	vector<MONAN> arrMonAnA;
	arrMonAnA.push_back(a);
	arrMonAnA.push_back(d);
	arrMonAnA.push_back(e);

	vector<MONAN> arrMonAnB;
	arrMonAnB.push_back(b);
	arrMonAnB.push_back(d);
	arrMonAnB.push_back(e);

	vector<MONAN> arrMonAnC;
	arrMonAnC.push_back(c);
	arrMonAnC.push_back(d);
	arrMonAnC.push_back(e);

	vector<MONAN> arrMonAnD;
	arrMonAnD.push_back(c);
	arrMonAnD.push_back(d);
	arrMonAnD.push_back(e);
	arrMonAnD.push_back(f);

	vector<PHANAN>arrPhanAn;
	arrPhanAn.push_back({ "A", arrMonAnA });
	arrPhanAn.push_back({ "B", arrMonAnB });
	arrPhanAn.push_back({ "C", arrMonAnC });
	arrPhanAn.push_back({ "D", arrMonAnD });

	bool check = true;
	do
	{
		cout << "Chon mot trong cac phan an sau" << endl;
		XuatMangPhanAn(arrPhanAn);
		int choose;
		cin >> choose;
		switch (choose)
		{
		case 1:
			XuatPhanAnLoai2(arrPhanAn.at(0));
			break;
		case 2:
			XuatPhanAnLoai2(arrPhanAn.at(1));
			break;
		case 3:
			XuatPhanAnLoai2(arrPhanAn.at(2));
			break;
		case 4:
			XuatPhanAnLoai2(arrPhanAn.at(3));
			break;
		default:
			check = false;
			break;
		}
	} while (check);

	arrMonAnA.clear();
	arrMonAnB.clear();
	arrMonAnC.clear();
	arrMonAnD.clear();
	arrPhanAn.clear();

	return 0;
}