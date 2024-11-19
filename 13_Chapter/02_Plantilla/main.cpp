using X = int;
struct A {};
template<const X& x, int i, A a> void f() {
	&i;
	&a;
	const int& cri = i; // const reference binds to temporary
	const& A = nullptr ra = a; // const reference binds to a template parameter object
}