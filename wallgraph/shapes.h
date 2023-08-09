#ifndef PLIBC_WALLGRAPH_SHAPES_H
#define PLIBC_WALLGRAPH_SHAPES_H

#include <stdlib.h>
#include "../types.h"
#include "typedefs.h"

struct rect {
    i32 x, y;
    size_t w, h;
    uColor col;
};

void Wallgraph_fillRect(uColor *wall, size_t width, size_t height, struct rect rect);

struct circle {
    i32 x, y;
    size_t radius;
    uColor col;
};

void Wallgraph_fillCircle(uColor *wall, size_t width, size_t height, struct circle circle);

struct line {
    i32 x1, y1;
    i32 x2, y2;
    size_t thicc;
    uColor col;
};

void WallGraph_drawLine(uColor *wall, size_t width, size_t height, struct line line);

#endif
