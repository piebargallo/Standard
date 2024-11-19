template<class T1> class A {
	template<class T2> class B {
		void mf();
	};
};
template<> template<> class A<int>::B<double>;
template<> template<> void A<char>::B<char>::mf();

template<class T2>
template<class T1>
void A<T1>::B<T2>::mf() {}
