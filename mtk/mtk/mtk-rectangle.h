/*
 * Mtk
 *
 * A low-level base library.
 *
 * Copyright (C) 2023 Red Hat
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library. If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <cairo.h>
#include <glib-object.h>

#include "mtk/mtk-macros.h"

#define MTK_TYPE_RECTANGLE            (mtk_rectangle_get_type ())

/**
 * MtkRectangle:
 * @x: X coordinate of the top-left corner
 * @y: Y coordinate of the top-left corner
 * @width: Width of the rectangle
 * @height: Height of the rectangle
 */
#ifdef __GI_SCANNER__
/* The introspection scanner is currently unable to lookup how
 * cairo_rectangle_int_t is actually defined. This prevents
 * introspection data for the GdkRectangle type to include fields
 * descriptions. To workaround this issue, we define it with the same
 * content as cairo_rectangle_int_t, but only under the introspection
 * define.
 */
struct _MtkRectangle
{
  int x;
  int y;
  int width;
  int height;
};
typedef struct _MtkRectangle MtkRectangle;
#else
typedef cairo_rectangle_int_t MtkRectangle;
#endif

MTK_EXPORT
GType mtk_rectangle_get_type (void);

MTK_EXPORT
MtkRectangle * mtk_rectangle_copy (const MtkRectangle *rect);

MTK_EXPORT
void mtk_rectangle_free (MtkRectangle *rect);

MTK_EXPORT
gboolean mtk_rectangle_equal (const MtkRectangle *src1,
                              const MtkRectangle *src2);
