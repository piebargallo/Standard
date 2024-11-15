class A {
private:
	void f(char);
public:
	void f(int);
protected:
	void g();
};

void A::f(char)
{
}

void A::f(int)
{
}

void A::g()
{
}

class B : public A {
	using A::g;
};
