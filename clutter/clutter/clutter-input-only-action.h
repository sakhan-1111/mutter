/*
 * Clutter.
 *
 * An OpenGL based 'interactive canvas' library.
 *
 * Copyright (C) 2022  Red Hat Inc.
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

#ifndef CLUTTER_INPUT_ONLY_ACTION_H
#define CLUTTER_INPUT_ONLY_ACTION_H

#include "clutter/clutter.h"

typedef gboolean (* ClutterInputOnlyHandleEvent) (const ClutterEvent *event,
                                                  gpointer            user_data);

#define CLUTTER_TYPE_INPUT_ONLY_ACTION (clutter_input_only_action_get_type ())
G_DECLARE_FINAL_TYPE (ClutterInputOnlyAction, clutter_input_only_action,
                      CLUTTER, INPUT_ONLY_ACTION, ClutterAction)

ClutterInputOnlyAction * clutter_input_only_action_new (ClutterInputOnlyHandleEvent handle_event,
                                                        gpointer                    user_data,
                                                        GDestroyNotify              destroy);

#endif /* CLUTTER_INPUT_ONLY_ACTION_H */