struct S {
	int x1 : 8 {42};
	int y1 : true ? 8 : 42;
	int y2 : (true ? 8 : 42);
	int z : 1 || new int{ 0 };
};