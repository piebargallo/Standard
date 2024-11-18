struct s { int a; };

void g() {
	struct s; // hide global struct s with a block-scope declaration
	s* p; // refer to local struct s
	struct s { char* p; }; // define local struct s
	struct s; // redeclaration, has no effect
}