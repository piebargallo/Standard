struct s { int a; };

void g(int s) {
	struct s* p = new struct s; // global s
	p->a = s; // parameter s
}