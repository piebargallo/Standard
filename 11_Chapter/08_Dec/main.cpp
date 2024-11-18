struct S {
	using T = void();
	T* p = 0; // brace-or-equal-initializer
	virtual T f = 0; // pure-specifier
};