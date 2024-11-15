namespace Outer {
	int i;
	namespace Inner {
		static void f() { i++; } // Outer::i
		int i;
		void g() { i++; } // Inner::i
	}
}