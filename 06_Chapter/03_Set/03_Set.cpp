// This set is a possibly-empty set of id-expressions, each of wich is either
// E or a subexpression of E, in the following ex, the set of potencial
// results of the initializer of n contains the first S::x subexpression,
// but not the second S::x subexpression

struct S { static const int x = 0; };
const int& f(const int &r);
int b; // Dudoso
int n = b ? (1, S::x) // S::x is not odr-used here
	: f(S::x); // S::s is odr-used here, so a def is required
// end example

int main() {}