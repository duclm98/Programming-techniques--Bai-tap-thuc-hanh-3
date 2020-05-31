#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct MonAn
{
	string ten;
	int gia;
};
typedef struct MonAn MONAN;

ostream& operator<<(ostream& outDev, MONAN& ma);