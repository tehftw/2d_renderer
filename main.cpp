
/*
 * By tehftw: a basic-ass 2D point renderer
 *
 * This code used "#pragma once" as header guardian
 *
 *
 *
 *
 *
 *
*/


#include <iostream>
#include <vector>

#include "R2Vector.h"
#include "tehftw_r2renderfunctions.h"

// TODO: points should be displayed and put inside a bitmap
// TODO: switch it all into "double" instead of "integer"

using namespace std;









int main()
{

    int points_vector_size = 8;
    vector<R2Vector> points_vector(points_vector_size);


    points_vector.at(0).InputCoordinates( 0, 0 );
    points_vector.at(1).InputCoordinates( 1, 1 );
    points_vector.at(2).InputCoordinates( 3, 3 );
    points_vector.at(3).InputCoordinates( 1, 3 );
    points_vector.at(4).InputCoordinates( 1, 5 );
    points_vector.at(5).InputCoordinates( 9, 4 );
    points_vector.at(6).InputCoordinates( 11, 5 );
    points_vector.at(7).InputCoordinates( 10, 20 );






    cout << "\n\n";

    cout << "By building the character array:\n\n";
    R2_Render_Image_Building_Char_array_ConsoleBW(points_vector, points_vector_size);



    cout << "\n\n - - END - -\n\n" << endl;
    return 0;
}



