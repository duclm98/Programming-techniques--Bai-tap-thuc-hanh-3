#include "MonAn.h"

ostream& operator<<(ostream& outDev, MONAN& ma) {
	outDev << ma.ten << ": " << ma.gia;
	return outDev;
}