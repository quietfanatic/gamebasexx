#ifndef _HAVE_OBJECT_H
#define _HAVE_OBJECT_H

#include "gamebase.h"


 // First class Types!  Implemented by template func returning bool
typedef struct Object Object;
typedef bool (& object_type) (Object*);
template <class T>
inline bool ot (Object* x);

 // Contains the minimum required for an object.


struct Object : public gc {
	Object* next;  // Doubly-linked list
	Object* prev;  // Implementing raw is faster than using C++ STL list<>
	coord x;
	coord y;
	coord xvel;
	coord yvel;
	object_flags flags;
	Object();
	 // Lower order => move first and draw first (behind others)
	virtual float order ();

	 // Events
	virtual void create ();
	virtual void before_move ();
	virtual void move ();
	virtual void after_move ();
	virtual void draw ();
	virtual void after_draw ();

	 // Shape
	virtual coord l ();
	virtual coord t ();
	virtual coord r ();
	virtual coord b ();
	virtual geometry geom ();
	coord L ();  // x - l
	coord T ();  // y - t
	coord R ();  // x + r
	coord B ();  // y + b
	 // Physics
	virtual double mass ();

	 // Drawing
	virtual coord surface_x ();
	virtual coord surface_y ();
	virtual SDL_Surface* surface ();
	virtual uint32 color ();

	 // Add/remove
	void insert ();
	void remove ();

	 // Collision detection
	bool collision (Object* other);
	bool collision_rect (coord rl, coord rt, coord rr, coord rb);
	side detect_side (Object* other);
	side collision_side (Object* other);
	double collision_time (Object* other, side dir = NOSIDE);
	template <class T = Object>
		T** get_collisions (bool order_by_hit = true);
	Object** get_collisions_obj(object_type T = ot<Object>, bool order_by_hit = true);
	 // Collision reactions
	side contact (Object* other, side dir = ALLSIDES);
	side bounce (Object* other, side dir = ALLSIDES);
	side kinetic_bounce (Object* other, double elasticity = 1.0, side dir = ALLSIDES);
	void impulse (Object* other, double xstr, double ystr);

	 // Misc state
	side out_of_room ();
	side offscreen ();
}; 



 // First class Types!  Implemented by template func returning bool
typedef bool (& object_type) (Object*);
template <class T>
inline bool ot (Object* x);



#endif
