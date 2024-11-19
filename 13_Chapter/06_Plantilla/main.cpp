template<class T> struct A {
	~A();
};
void f(A<int>* p, A<int>* q) {
	p->A<int>::~A();
	q->A<int>::~A<int>();
}

template<class T>
A<T>::~A() {}
