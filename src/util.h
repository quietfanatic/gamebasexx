
 // Method definition

#define VM(n, v) virtual n () { return v; }

 // Routine

#define FOR_ALL_OBJECTS(obj) \
	for (Object* obj = first_object; obj; obj = obj->next)

#define FOR_ALL_OF_TYPE(obj, type) \
	type* obj; \
	FOR_ALL_OBJECTS(obj##__) if (obj = dynamic_cast<type*>(obj##__))

#define FOR_COLLISIONS_BY_HIT(obj, type) \
	type** _coll_list_##obj = get_collisions<type>(); \
	uint _coll_i_##obj = 0; \
	for (type* obj = _coll_list_##obj[0]; obj ; (obj = _coll_list_##obj[++_coll_i_##obj]))


 // Math

#define INF (1.0/0.0)

#define SWAP(a, b) \
	if(1) { \
		typeof(a) _tmp; \
		_tmp = (a); \
		(a) = (b); \
		(b) = _tmp; \
	}

#define MAX(a, b) \
	((a) > (b) ? (a) : (b))

#define MIN(a, b) \
	((a) < (b) ? (a) : (b))

#define SET_MAX(var, max) \
	if ((var) > (max)) (var) = (max)

#define SET_MIN(var, min) \
	if ((var) < (min)) (var) = (min)

#define ADD_MAX(var, add, max) \
	if ((var) < (max)) { \
		(var) += (add); \
		if ((var) > (max)) (var) = (max); \
	}

#define SUB_MIN(var, sub, min) \
	if ((var) > (min)) { \
		(var) -= sub; \
		if ((var) < (min)) (var) = (min); \
	}

#define ADD_LIM(var, add, lim) \
	if ((add) > 0) {\
		ADD_MAX(var, add, lim); \
	} \
	else { \
		SUB_MIN(var, -(add), lim); \
	}

#define RANDINT(lim) (rand()%(lim))
#define RANDFLOAT(lim) ((float)rand()/RAND_MAX*(lim))

#ifdef GAMEBASE_USE_FP
#define long_coord_sqrt(sqr) (px(sqrt((double)sqr / (GAMEBASE_FP_HIGH*GAMEBASE_FP_HIGH))))
#else
#ifdef GAMEBASE_USE_FLOAT
#define long_coord_sqrt(sqr) sqrt(sqr)
#else
#define long_coord_sqrt(sqr) sqrt(sqr)
#endif
#endif 

 // Initialization

#define INIT(...) INIT_COUNTER(__COUNTER__, __VA_ARGS__)
#define INIT_COUNTER(counter, code) void __attribute__ ((__constructor__)) init_##counter () { code; }

