struct S {
	int m;
};
int i = sizeof(S::m);
int j = sizeof(S::m + 42);