struct T1 { int a, b; };
struct T2 { int c; double d; };
union U { T1 t1; T2 t2; };
int f() {
	U u = { { 1, 2 } };
	return u.t2.c;
}