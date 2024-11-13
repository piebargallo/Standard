void f(int, const int(&)[2] = {}); // #1
void f(const int&, const int(&)[1]); // #2
void test() {
	const int x = 17;
	auto g = [](auto a) {
		f(x);
	}; // OK, calls #1, does not capture x

	auto g2 = [=](auto a) {
		int selector[sizeof(a) == 1 ? 1 : 2]{};
		if (x, selector);  // Ok, captures x, can call #1 or #2
	};

	auto g3 = [=](auto a) {
		typeid(a + x);  // captures x regardless of wheter a + x is an unevalued operand
	};
}