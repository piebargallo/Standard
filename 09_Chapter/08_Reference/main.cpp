int g(int) noexcept;
void f() {
	int i = 0;
	int& r = i; // r refers to i
	r = 1; // The value of i becomes 1
	int* p = &r; // p points to i
	int& rr = r; // rr refers to what x refers to, that is, to i
	int(&rg)(int) = g; // rg refers to the function g
	rg(i); // calls function g
	int a[3]{};
	int(&ra)[3] = a; // ra refers to the array a
	ra[1] = i; // modifies a[1]
} 