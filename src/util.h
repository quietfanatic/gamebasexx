
 // Method calls

 // required because C++ does not let outside virtuals inside a mixin.
#define out this->

 // Routine

#define FOR_ALL_OBJECTS(obj) \
	std::list<Object*>::iterator obj_ = objects.begin(); \
	for (Object* obj = *obj_; obj_ != objects.end(); obj = *(++obj_))

#define FOR_ALL_OF_TYPE(obj, type) \
	type* obj; \
	FOR_ALL_OBJECTS(obj__) if (obj = dynamic_cast<type*>(obj__))

#define FOR_COLLISIONS_BY_HIT(obj, type) \
	std::list<type*> _coll_list = get_collisions<type>(); \
	std::list<type*>::iterator _coll_i = _coll_list.begin(); \
	for (type* obj = *_coll_i; _coll_i != _coll_list.end(); (obj = *(++_coll_i)))

#define PARENT_EVENT(parent, name) \
	parent##_##name((void*) self)


 // Math

#define SWAP(a, b) \
	if(1) { \
		typeof(a) _tmp; \
		_tmp = (a); \
		(a) = (b); \
		(b) = _tmp; \
	}

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

