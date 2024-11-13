void f(const int*);
void g() {
	const int N = 10;
	[=] {
		int arr[N];
		f(&N);
	};
}

void f(const int*)
{
}

int main() {}
