/*
 * This file is part of Espruino, a JavaScript interpreter for Microcontrollers
 *
 * Copyright (C) 2020 Gordon Williams <gw@pur3.co.uk>
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * ----------------------------------------------------------------------------
 * Machine generated vector font header (by build_vector_font.sh)
 * ----------------------------------------------------------------------------
 */

#ifndef NO_VECTOR_FONT
#include "graphics.h"


// returns the width of a character
unsigned int graphicsVectorCharWidth(unsigned int sizex, char ch);

// Callback for graphicsFillVectorChar
typedef void(*graphicsPolyCallback)(void *data, int points, short *vertices);

// prints character by calling callback with the data (x16), returns width
unsigned int graphicsGetVectorChar(graphicsPolyCallback callback, void *callbackData, int x1, int y1, int sizex, int sizey, char ch);
#endif
