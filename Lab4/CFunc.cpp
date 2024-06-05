#include <iostream>
#include <math.h>

extern "C" float cfunc(float x, int k) {
	float ak;
	float kk = k;
	ak = pow(x, -kk) / (sin(x*kk));
	//std::cout << k << '\t' << x << '\t' << ak << std::endl;
	return ak;
}
