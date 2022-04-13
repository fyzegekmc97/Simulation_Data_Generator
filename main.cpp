#include <iostream>
#include <libasn1-runtime/BERValueReader.hh>
#include "Geometric_Data_Generator.h"

int main() {
    std::cout << "Hello, World!" << std::endl ;
    Lat_Long_Alt_Data * some_data ;
    Lat_Long_Alt_Data data ;
    some_data = &data ;
    some_data->altitude = 165*meter ;
    some_data->lat_full_degrees = 41.047056006245285 ;
    some_data->long_full_degrees = 29.032818999130992 ;

    return 0 ;
}
