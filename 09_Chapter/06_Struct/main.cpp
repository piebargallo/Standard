struct C {
	union {
		int a;
		const char* p;
	};
	int x;
} c = { .a = 1, .x = 3 };

int main() {}
