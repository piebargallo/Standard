struct S {
	S();
	~S();
};

template <typename T>
S a = T();

S::S()
{
}

S::~S()
{
}
