static int divide_by_32(int x) {
	[[assume(x >= 0)]];
}

int f(int y) {
	[[assume(++y == 43)]];
	return y;
}