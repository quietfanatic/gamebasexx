#ifndef _HAVE_GRAPHICS_CPP
#define _HAVE_GRAPHICS_CPP


#if SDL_BYTEORDER == SDL_BIG_ENDIAN
#define	RMASK 0xff000000
#define	GMASK 0x00ff0000
#define	BMASK 0x0000ff00
#define AMASK 0x000000ff
#else
#define	RMASK 0x000000ff
#define	GMASK 0x0000ff00
#define	BMASK 0x00ff0000
#define AMASK 0xff000000
#endif





 // 32-bit pixel format for load_image
SDL_PixelFormat RGBAFORMAT = {
	NULL,32,4,0,0,0,0,0,0,0,0,
	RMASK,
	GMASK,
	BMASK,
	AMASK,
	0,0
};


// Loading

SDL_Surface* load_image(const char* filename) {
	game_init();
	SDL_Surface* image = IMG_Load(filename);
	if (!image) { printf("Error: Could not load \"%s\"\n", filename); exit(1); }
	SDL_Surface* surf = SDL_ConvertSurface(image, &RGBAFORMAT, surface_flags);
	SDL_FreeSurface(image);
	return surf;
}


// Drawing

void draw_color (uint32 color, coord l, coord t, coord r, coord b) {
	SDL_Rect draw_rect = {
		(int16)((l - camera.x)/P),
		(int16)((t - camera.y)/P),
		(uint16)((r - l)/P),
		(uint16)((b - t)/P)
	};
	SDL_FillRect(
		game_window,
		&draw_rect,
		color
	);
}
inline void draw_color (uint32 color, Object* o) {
	draw_color(color, o->x - o->l(), o->y - o->t(), o->x + o->r(), o->y + o->b());
}

void draw_surface (SDL_Surface* surface, coord x, coord y) {
	SDL_Rect draw_rect = {(int16)((x - camera.x)/P), (int16)((y - camera.y)/P), 0, 0};
	SDL_BlitSurface(
		surface,
		NULL,
		game_window,
		&draw_rect
	);
}



#endif
