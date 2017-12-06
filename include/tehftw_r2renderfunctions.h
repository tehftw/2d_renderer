#pragma once

#include <iostream>
#include <vector>
#include "R2Vector.h"

const int CONST_IMAGE_SIZE_X = 25;
const int CONST_IMAGE_SIZE_Y = 25;

const char CONST_CONSOLE_RENDERER_BLACK_POINT = 'B';
const char CONST_CONSOLE_RENDERER_WHITE_POINT = ' ';
const char CONST_CONSOLE_RENDERER_X_AXIS_CHARACTER = '-';
const char CONST_CONSOLE_RENDERER_Y_AXIS_CHARACTER = '|';



void R2_Render_Image_Building_Char_array_ConsoleBW(std::vector<R2Vector> array_of_points, int size_of_array);


// Legacy, don't use it anymore, don't support
void R2_Render_Image_ConsoleBW(std::vector<R2Vector> array_of_points, int size_of_array);
