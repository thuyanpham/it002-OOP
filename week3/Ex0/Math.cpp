#include "Math.h"

int GCDivisor(int x, int y) {
	while (x != y) {
		if (x > y)
			x -= y;
		else if (x < y)
			y -= x;
	}
	return x;
}

int LCMultiple(int x, int y) {
	return (x * y) / GCDivisor(x, y);
}
 