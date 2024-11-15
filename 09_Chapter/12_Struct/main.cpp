#include <initializer_list>
#include <string>
struct S {
	S(std::initializer_list<double>); // #1
	S(const std::string&); // #2
	// ...
};
const S& r1{ 1, 2, 3.0 }; // invoke #1
const S& r2{ "Spinach" }; // invoke #2