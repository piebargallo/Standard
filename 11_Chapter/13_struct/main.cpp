typedef void fv();
typedef void fvc();
struct S {
	fv memfunc1;  // equivalent to: void memfunc1();
	void memfunc2();
	fvc memfunc3; // equivqlent to: void memfunc3() const;
};
fv S::* pmfv1 = &S::memfunc1;
fv S::* pmfv2 = &S::memfunc2;
fv S::* pmfv3 = &S::memfunc3;

void S::memfunc2() {}
