namespace N {
	template<class>
	struct A {
		struct B;
	};
}
using N::A;
template<class T> struct A<T>::B {};
template<> struct A<void> {};