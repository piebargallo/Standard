struct N {  // neither trivial nor standard-layout
	int i;
	int j;
	virtual ~N();
};

struct T {  // trivial but not standard-layout
	int i;
private:
	int j;
};

struct SL {  // standard-layout but not trivial
	int i;
	int j;
	~SL();
};

struct POD {  // both trivial and standard-layput
	int i;
	int j;
};

N::~N() {}

SL::~SL() {}

