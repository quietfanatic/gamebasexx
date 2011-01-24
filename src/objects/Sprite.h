#ifndef _HAVE_SPRITE_H
#define _HAVE_SPRITE_H

typedef uint32 collide_flags;
#define COLL_ONLYON 1<<8
#define COLL_CONTACT 1<<9
#define COLL_STOP 1<<10
#define COLL_BOUNCE 1<<11
#define COLL_REFLECT 1<<12
#define COLL_KINETIC 1<<13
#define COLL_ONLYNEW 1<<14




struct Sprite : public Object {
	coord xvel;
	coord yvel;
	Sprite ();
	virtual void move ();
	side collision_direction (Object* other);
	side collide (Object* other, collide_flags flags);
	side contact (Object* other);
	side bounce (Object* other);
	template <class T = Object>
	T** get_collisions (bool order_by_hit = true);
	Object** get_collisions_obj(object_type T = ot<Object>, bool order_by_hit = true);
};






#endif
