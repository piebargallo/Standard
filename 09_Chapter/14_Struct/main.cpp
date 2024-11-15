struct trivial {
	trivial() = default;
	trivial(const trivial&) = default;
	trivial(trivial&&) = default;
	trivial& operator=(const trivial&) = default;
	trivial& operator=(trivial&&) = default;
	~trivial() = default;
};