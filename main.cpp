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
    init_lat_long_from_values(some_data) ;
    std::vector<Lat_Long_Alt_Data> my_path = lat_long_generator(nullptr,0.00001,0.000001,0,100,nullptr,true,nullptr);
    return 0 ;
}
