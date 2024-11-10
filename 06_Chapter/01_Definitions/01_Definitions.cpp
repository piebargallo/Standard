// All but one of the following are def
int a; // def a
extern const int c = 1; // def c
int f(int x) { return x + a; } // def f and def x
struct S { int a; int b; }; // def S, S::a and S::b
struct X {  // def x
	int x; // def non-static data member x
	static int y; // declares static data member y
	X() : x(0) {} // def a constructor of X
};
int X::y = 1; // def X::y
enum { up, down }; // def up and down
namespace N { int d; } // def N and N::d
namespace N1 = N; // def N1
X anX; // def AnX

// Whereas these are just declarations
extern int a; // declares a 
extern const int c; // dec c
int f(int); // dec f
struct S; // dec S
typedef int Int; // dec Int
extern X AnotherX; // dec anotherX
using N::d; // dec d
// end example

int main(){}
