struct S { int n; };
auto f() {
	S x{ 1 };
	constexpr S y{ 2 };
	return [&](bool b) { return (b ? y : x).n; };
}
auto g = f();