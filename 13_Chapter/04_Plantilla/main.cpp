template<class T, T::type n = 0> class X;
struct S {
	using type = int;
};
using T1 = X<S>;