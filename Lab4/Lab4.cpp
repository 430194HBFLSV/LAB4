#include <iostream>

extern "C" float asmfunc(float x, int n);

int main(int argc, char** argv) {
	float x, n;
	float ans;
	std::cout << "Input x:";
	std::cin >> x;
	std::cout << "Input n:";
	std::cin >> n;
	ans = asmfunc(x, n);
	std::cout << "Answer: " << ans;
	return 0;
}
