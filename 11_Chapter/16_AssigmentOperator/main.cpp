struct X {
	X();
	X& operator=(X&);
};
const X cx;
X x;
X::X() {}

X& X::operator=(X&) {}
