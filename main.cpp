#include <iostream>
#include <libasn1-runtime/BERValueReader.hh>
#include "Geometric_Data_Generator.h"
#include <nlohmann/json.hpp>

using json = nlohmann::json ;

int main() {
    std::cout << "Hello, World!" << std::endl ;
    Lat_Long_Alt_Data * some_data ;
    Lat_Long_Alt_Data data ;
    some_data = &data ;
    some_data->altitude = 165*meter ;
    some_data->lat_full_degrees = 41.047056006245285 ;
    some_data->long_full_degrees = 29.032818999130992 ;
    json some_array = json::array({});
    std::cout << some_array.dump(4) << "\n" ;
    std::cout << std::boolalpha << some_array.is_array() << "\n" ;
    std::cout << std::boolalpha << some_array.is_object() << "\n" ;
    json some_json_object = json::object() ;
    some_json_object.emplace("15","abc") ;
    some_array.push_back("some_val") ;
    some_array.push_back(some_json_object) ;
    std::cout << some_array.dump(4) ;

    return 0 ;
}
