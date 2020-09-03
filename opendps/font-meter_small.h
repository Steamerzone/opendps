/** Font generated from `./gen_lookup.py -f gfx/Ubuntu-C.ttf -s 16 -o meter_small` */

#ifndef __FONT_METER_SMALL_H__
#define __FONT_METER_SMALL_H__

#include <stdint.h>

#define FONT_METER_SMALL_MAX_GLYPH_HEIGHT (11)
#define FONT_METER_SMALL_MAX_GLYPH_WIDTH  (10)
#define FONT_METER_SMALL_MAX_DIGIT_WIDTH  (6)
#define FONT_METER_SMALL_DOT_WIDTH        (2)
#define FONT_METER_SMALL_SPACING          (1)
#define FONT_METER_SMALL_SPACE_WIDTH      (3)

extern const uint32_t font_meter_small_height;
extern const uint8_t font_meter_small_widths[96];
extern const uint8_t font_meter_small_sizes[96];
extern const uint16_t font_meter_small_offsets[96];
extern const uint8_t font_meter_small_pixdata[218];

#endif // __FONT_METER_SMALL_H__