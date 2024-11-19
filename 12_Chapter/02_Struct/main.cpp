struct A {
	operator int();
};
A operator+(const A&, const A&);
static void m() {
	A a, b;
	a + b;
}

A::operator int()
{
}

A operator+(const A&, const A&)
{
	return A();
}
