#include <algorithm>
#include <cmath>

void abssort(float* x, unsigned N) {
	std::sort(x, x + N, [](float a, float b) { return std::abs(a) < std::abs(b); });
}

auto x1 = [](int i) { return i; }; // return type is int

auto x3 = [&]()->auto&& {return j; }; // return type is int&

int i = [](int i, auto a) { return i; }(3, 4); // a generic lambda

int j = []<class T>(T t, int i) { return i; }(3, 4); // a generic lambda

int main() {}