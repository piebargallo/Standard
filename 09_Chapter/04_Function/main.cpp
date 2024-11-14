void a(char*); // #1
static void a(char[]) {} // defines #1
void a(const char*) {} // OK, another overloaded

void a(char*)
{
}

void b(char(*)[2]); // #2 
static void b(char[3][2]) {} // defines #2
static void b(char[3][3]) {} // OK, another overloaded

void b(char(*)[2])
{
}

void c(int x(const int)); // #3
static void c(int (*)(int)) {} // defines #3

void c(int x(const int))
{
}

int main()
{
	return 0;
}
