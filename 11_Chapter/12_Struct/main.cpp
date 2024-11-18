#include <xmemory>
struct X {
	typedef int T;
	static T count;
	void f(T);
};

void X::f(T t = count) {}
