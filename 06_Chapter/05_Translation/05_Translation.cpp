auto f() {
	struct A {};
	return A{};
}

decltype(f()) g();
auto x = g();