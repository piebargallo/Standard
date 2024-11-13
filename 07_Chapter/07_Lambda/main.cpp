struct C {
	template <typename T>
	C(T);
};

void func(int i) {
	int x = [=](this auto&&) { return i; }();
	int z = [=](this C) { return 42; }();
}