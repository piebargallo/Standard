// A throw-expression is of type void

#include <memory>
#include <iostream>

void g(char* a, char* b, char* c) {}

void can_merge(int x) {
	std::unique_ptr<char[]> a{ new (std::nothrow) char[8] };
	std::unique_ptr<char[]> b{ new (std::nothrow) char[8] };
	std::unique_ptr<char[]> c{ new (std::nothrow) char[x] };

	g(a.get(), b.get(), c.get());
}

/* 
	try {
	// ...
   } catch (...) { // catch all exceptions
		// respond (partially) to exception
	throw; // pass the exception to some other handler 
*/
void cannot_merge(int x) {
	std::unique_ptr<char[]> a{ new char[8] };
	try {
		std::unique_ptr<char[]> b{ new char[x] };
	}
	catch (const std::bad_alloc& e) {
		std::cerr << "Allocation failed: " << e.what() << std::endl;
		throw;
	}
}

int main() 
{
	cannot_merge(-1);
	std::cout << cannot_merge << std::endl;
	return 0;
}