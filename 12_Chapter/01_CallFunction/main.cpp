struct C {
	void a();
	void b() {
		a();  // (*this).a()
	}
};

void c(); // #1
static void c(int = 0); //#2

void C::a() {}

void c() {}

void c(int) {}
