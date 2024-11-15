enum direction { left='l', right='r' };

void g() {
	direction d; 
	d = left;
	d = direction::right;
}

enum class fruit { orange, apple };
struct S {
	using enum fruit;
};

static void f() {
	S s;
	s.orange;
	S::orange;
}

