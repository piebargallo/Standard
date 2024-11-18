// X::X(const X&) and X::X(X&, int = 1) are copy constructors

struct X {
	X(int);
	X(const X&, int = 1);
};

X::X(int)
{
}

X::X(const X&, int)
{
}

X a(1);  // calls X(int)
X b(a, 0);  // calls X(const X&, int);
X c = b;  // calls X(const X&, int);

struct Y {
	Y(const Y&);
	Y(Y&&);
};
extern Y f(int);
Y d(f(1));  // calls Y(Y&&)
Y e = d;  // calls Y(const Y&)

Y::Y(const Y&) {}

Y::Y(Y&&) noexcept {}

Y f(int) {}

struct Z {
	Z(const Z&);
	Z(Z&);
	Z(Z&&);
	Z(const Z&&);
};

Z::Z(const Z&) {}

Z::Z(Z&&) {}


