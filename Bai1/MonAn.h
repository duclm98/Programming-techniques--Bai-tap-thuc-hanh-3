#pragma once
#include <iostream>
#include <string>
using namespace std;

struct MonAn
{
	string ten;
	int gia;
};
typedef struct MonAn MONAN;

ostream& operator<<(ostream& outDev, MONAN& ma);