/****************************************************************************
 * USB Loader GX resource files.
 * This file is generated automatically.
 * Includes 5 files.
 *
 * NOTE:
 * Any manual modification of this file will be overwriten by the generation.
 ****************************************************************************/
#ifndef _FILELIST_H_
#define _FILELIST_H_

#include <gctypes.h>

#include "clock_ttf.h"
#include "font_ttf.h"
#include "app_booter_bin.h"
#include "custom_banner_bnr.h"
#include "stub_bin.h"
#include "Resources.h"

RecourceFile Resources::RecourceFiles[] =
{
	{"clock.ttf", clock_ttf, clock_ttf_size, NULL, 0},
	{"font.ttf", font_ttf, font_ttf_size, NULL, 0},
	{"app_booter.bin", app_booter_bin, app_booter_bin_size, NULL, 0},
	{"custom_banner.bnr", custom_banner_bnr, custom_banner_bnr_size, NULL, 0},
	{"stub.bin", stub_bin, stub_bin_size, NULL, 0},
	{"listBackground.png", NULL, 0, NULL, 0},	// Optional
	{"carouselBackground.png", NULL, 0, NULL, 0},	// Optional
	{"gridBackground.png", NULL, 0, NULL, 0},	// Optional
	{NULL, NULL, 0, NULL, 0}
};

#endif
