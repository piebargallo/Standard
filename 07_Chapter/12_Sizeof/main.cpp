template<class... Types>
struct count {
	static const std::size_t value = sizeof...(Types);
};