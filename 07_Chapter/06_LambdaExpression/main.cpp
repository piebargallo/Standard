#include <iostream>

auto glambda = [](auto a, auto&& b) { return a < b; };
bool b = glambda(3, 3.14);

auto vglambda = [](auto printer) {
	return [=](auto&& ... ts) {
		printer(std::forward<decltype(ts)...);

		return [=]() {
			printer(rs ...);
		};
	};
};
auto p = vglambda([](auto v1, auto v2, auto v3)
	{ std::cout << v1 << v2 << v3; });

auto q = p(1, 'a', 3.14);
q();

auto fact = [](this auto self, int n) -> int {
	return (n <= 1) ? 1 : n * self(n - 1);
};

int main()
{
	std::cout << fact(5);
}

