struct A;
struct A final {};

struct X {
	struct C { constexpr operator int() { return 5; } };
	struct b final : C {};
};