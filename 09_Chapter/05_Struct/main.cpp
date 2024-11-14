#include <type_traits>
struct C {
	void f(this C& self);
	template <typename Self> void g(this Self&& self, int);
};

void C::f(this C& self)
{
}

template<typename Self>
void C::g(this Self&& self, int)
{
}

static void test(C c) {
	c.f(); // calls C::f
	c.g(42); // calls C::g<C&>
	std::move(c).g(42); // calls C::g<C>
}

int main()
{
	return 0;
}