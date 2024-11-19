// CTAD
#include <cstddef>
template <typename T> struct B {
	B(T);
};

template <typename T> struct C : public B<T> {
	using B<T>::B;
};

template <typename T> struct D : public B<T> {};

B(int)->B<char>;

template <typename T> struct E : public B<int> {
	using B<int>::B;
};

template <typename T, typename U, typename V> struct F {
	F(T, U, V);
};

template <typename T, typename U> struct G : F<U, T, int> {
	using G::F::F;
};

template<class T, std::size_t N>
struct H {
	T array[N];
};

template<class T, std::size_t N>
struct I {
	volatile T array[N];
};

template<std::size_t N>
struct J {
	unsigned char array[N];
};

H h = { "abc" };
I i = { "def" };

template<typename T>
B<T>::B(T) {}
