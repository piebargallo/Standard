struct B { int i; };
struct C : B { };
struct D : C { };
struct E : D { char : 4; };

struct Q{};
struct S : Q { };
struct T : Q { };
struct U : S, T { };
