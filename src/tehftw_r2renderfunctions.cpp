#include "tehftw_r2renderfunctions.h"





void R2_Render_Image_Building_Char_array_ConsoleBW(std::vector<R2Vector> array_of_points, int size_of_array)
{

// This 2D array is for storing only the information about the points that are fed into the function
// Don't you dare use it for storing anything other than those points
    char displayed_characters_array[CONST_IMAGE_SIZE_X][CONST_IMAGE_SIZE_Y];

// Remove trash from displayed_characters_array, so that you are sure the empty points are displayed as they should be
    for(int y = 0; y < CONST_IMAGE_SIZE_Y; y++)
    {
        for(int x = 0; x < CONST_IMAGE_SIZE_X; x++)
        {
            displayed_characters_array[x][y] = CONST_CONSOLE_RENDERER_WHITE_POINT;
        }
    }

    int x_value_of_drawn_point;
    int y_value_of_drawn_point;


// REMEMBER to check  only until "size_of_array - 1", you idiot xD because the first value is 0, the last is n-1
    for(int i = 0; i < size_of_array; i++)
    {
        x_value_of_drawn_point = array_of_points.at(i).x;
        y_value_of_drawn_point = array_of_points.at(i).y;
        displayed_characters_array[x_value_of_drawn_point][y_value_of_drawn_point] = CONST_CONSOLE_RENDERER_BLACK_POINT;
    }

    for(int y = 0; y <= CONST_IMAGE_SIZE_Y; y++) // In here, we're checking up to the size of Y axis, because we will render the Y axis too
    {
        // Draw the side axis to show, well, the side
        std::cout << "\n" << CONST_CONSOLE_RENDERER_Y_AXIS_CHARACTER;
        for(int x = 0; x < CONST_IMAGE_SIZE_X; x++)
        {
            if(y == CONST_IMAGE_SIZE_Y)
            {
                std::cout << CONST_CONSOLE_RENDERER_X_AXIS_CHARACTER;
            }
            else
            {
                std::cout << displayed_characters_array[x][y];
            }
        }
    }
}






// This shouldn't be supported anymore
void R2_Render_Image_ConsoleBW(std::vector<R2Vector> array_of_points, int size_of_array)
{
    bool point_is_rendered = 0;
    // Only ones and zeros should be recored, like black and white
    std::cout << "\n";

    // remember about it being CONST_IMAGE_SIZE_X - 1, so that it doesn't go out of bounds, dumbass xD
    for(int y = 0; y < CONST_IMAGE_SIZE_Y-1; y++)
    {
        std::cout << "\n" << CONST_CONSOLE_RENDERER_Y_AXIS_CHARACTER; // Don't forget to draw the left axis, on the side of the image
        for(int x = 0; x < CONST_IMAGE_SIZE_X; x++)
        {
            //  You should keep checking each point, for whether it will be rendered at that particular spot
            //  Don't forget to clear the point_is_rendered before you start checking!
            point_is_rendered = false;
            for(int i =0; i <= size_of_array; i++)
            {
                //  For now, it will have to check for each point xD
                // Could be added a check so that it stops checking further after
                if( ( array_of_points[i].x == x ) && ( array_of_points[i].y == y ) )
                {
                    point_is_rendered = true;
                }
                // Only render the point when its decided that it will be rendered
            }
            if( point_is_rendered )
            {
                std::cout << CONST_CONSOLE_RENDERER_BLACK_POINT;
            }
            else
            {
                std::cout << CONST_CONSOLE_RENDERER_WHITE_POINT;
            }
        }
    }
}
