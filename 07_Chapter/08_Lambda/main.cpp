struct S1 {
	int x, y;
	int operator()(int);
	void f() {
		[=]()->int {
			return operator()(this->x + y);
			};
	}
};

int main() {}

int S1::operator()(int)
{
	return 0;
}
