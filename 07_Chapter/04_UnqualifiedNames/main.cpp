void f() {
	float x, & r = x;

	[=]() -> decltype((x)) {  // lambda returns float const& because this lambda 
		// is not mutable and x is an value
		decltype(x) y1; // y1 has type float
		decltype((x)) y2 = y1; // y2 has a type float const&
		decltype(r) r1 = y1; // r1 has type float&
		decltype((r)) r2 = y2; // r2 has type float const&
		return y2;
		};

	[=](decltype((x)) y) {
		decltype((x)) z = x; // y has a type float&, z has a type float const&
		};

	[=] {
		[](decltype((x)) y) {}; // lambda takes a parameter of type float const&

		[x = 1](decltype((x)) y) {
			decltype((x)) z = x; // y has type int&, z has a type int const&
			};
		};
}