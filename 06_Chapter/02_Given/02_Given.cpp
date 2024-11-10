#include <string>

struct C {
	std::string s; // STL
};

int main() {
	C a;
	C b = a;
	b = a;
}

// The implementation will implicitly define functions to make the
// definition of C equivqlent to
struct C {
	std::string s;
	C() : s() { }
	C(const C& x) : s(x.s) { }
	C(C&& x) : s(static_cast<std::string&&>(x.s)) { }
		// : s(std::move(x.s)) { }
	C& operator=(const C& x) { s = x.s; return *this; }
	C& operator=(C&& x) { s = static_cast<std::string&&>(x.s); return *this; }
		// : s(std::move(x.s); return *this;) { }
	~C() { }
};
// end example
