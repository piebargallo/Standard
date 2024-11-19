template <class T> struct A {
	explicit A(const T&, ...) noexcept; // #1
	A(T&&, ...); // #2
};

template<class T>
A<T>::A(const T&, ...) noexcept {}

template<class T>
A<T>::A(T&&, ...) {}

template <typename T>
struct S {
	T x;
	T y;
};

template <typename T>
struct C {
	S<T> s;
	T t;
};

template <typename T>
struct D {
	S<int> s;
	T t;
};

template <typename T>
struct E {
	T t;
	decltype(t) t2;
};

template <typename... T>
struct Types {};

template <typename... T>
struct F : types<T...>, T.... {};

struct X {};
struct Y {};
struct Z {};

F f1 = { Types<X, Y, Z>{}, {}, {} };