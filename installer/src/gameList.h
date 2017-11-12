
#ifndef _GAMELIST_H_
#define _GAMELIST_H_

#include "zipList.h"

typedef struct _gList_t {
	uint32_t tid;
	char name[64];
	u8 *romPtr;
	u32 *romSizePtr;
} gList_t;

gList_t GameList[] = {
	{ 0x101FE600, "Amazon Video [JPN]", amazon_html, &amazon_html_size },
	{ 0x10102E00, "Amazon Instant Video [USA]", amazon_html, &amazon_html_size },
	{ 0x10102F00, "Amazon Instant Video [PAL]", amazon_html, &amazon_html_size },
};

static const int GameListSize = sizeof(GameList) / sizeof(gList_t);

#endif
