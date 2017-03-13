
#ifndef __CACTUS_INTERNAL_HELLO_H__
#define __CACTUS_INTERNAL_HELLO_H__

#include "../hello.h"

#ifdef __cplusplus
extern "C" {
#endif

	struct ALLEGRO_DISPLAY
	{
		
		int refresh_rate;
		int flags;
		int w, h;
		int min_w, min_h;
		int max_w, max_h;		
	};

#ifdef __cplusplus
}
#endif

#endif // __CACTUS_INTERNAL_HELLO_H__



