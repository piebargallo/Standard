void f(int n) {
	[&] { [n] { return n; }; };
}

int main() {}