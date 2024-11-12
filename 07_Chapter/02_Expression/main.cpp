struct A {
	char g();
	template<class T> auto f(T t) -> decltype(t + g())
	{
		return t + g();
	}
};
template auto A::f(int t) -> decltype(t + g());