// Types is a template type parameter pack
template <class... Types>
class Tuple;

// Dims is a non-type template parameter pack
template <class T, int... Dims>
struct multi_array;

// Values is a non-type template parameter pack
template <class... T>
struct value_holder {
	template <T... values> struct apply { };
};



