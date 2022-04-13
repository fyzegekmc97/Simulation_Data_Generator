#include "Geometric_Data_Generator.h"
#include <iomanip>

__attribute__((unused)) Lat_Long_Alt_Data * init_lat_long_from_values(Lat_Long_Alt_Data * init_struct)
{
    init_struct->altitude_str = std::to_string(init_struct->altitude) ;
    double lat_int_part ;
    auto lat_frac_part = (modf((double)init_struct->lat_full_degrees,(&lat_int_part))) ;
    std::cout << "Init struct has full degrees of: " << std::setprecision(10)  << init_struct->lat_full_degrees << "\n";
    std::cout << "Latitude full integer part: " << lat_int_part << "\n" ;
    std::cout << "Latitude full fractional part: "<<  lat_frac_part << "\n" ;
    init_struct->lat_deg_part = (int)(lat_int_part) ;
    double lat_full_degrees_left = init_struct->lat_full_degrees - lat_int_part ;
    lat_full_degrees_left = lat_full_degrees_left * 60 ;
    lat_frac_part = modf(lat_full_degrees_left,&lat_int_part) ;
    std::cout << "Integer part after extracting degrees: " << lat_int_part << "\n" ;
    std::cout << "Fractional part after extracting degrees: " << lat_frac_part << "\n" ;
    init_struct->lat_min_part = (int)(lat_int_part) ;
    lat_full_degrees_left = lat_full_degrees_left - lat_int_part ;
    lat_full_degrees_left = lat_full_degrees_left*60 ;
    lat_frac_part = modf(lat_full_degrees_left,&lat_int_part) ;
    std::cout << "Integer part after extracting minutes part: " << lat_int_part << "\n" ;
    std::cout << "Fractional part after extracting minutes part: " << lat_frac_part << "\n" ;
    init_struct->lat_sec_part = (int)(lat_int_part) ;
    init_struct->lat_deg_part_str = std::to_string(init_struct->lat_deg_part) ;
    init_struct->lat_min_part_str = std::to_string(init_struct->lat_min_part) ;
    init_struct->lat_sec_part_str = std::to_string(init_struct->lat_sec_part) ;
    init_struct->long_full_degrees_str = std::to_string(init_struct->long_full_degrees) ;
    double long_int_part ;
    auto long_frac_part = (float)(modf((double)init_struct->long_full_degrees,(&long_int_part))) ;
    std::cout << "Longitude integer part: " << long_int_part << "\n";
    std::cout << "Longitude fractional part: " << long_frac_part << "\n" ;
    init_struct->long_deg_part = (int)(long_int_part) ;
    double long_full_degrees_left = init_struct->long_full_degrees - long_int_part ;
    long_full_degrees_left = long_full_degrees_left * 60 ;
    long_frac_part = modf(long_full_degrees_left,&long_int_part) ;
    std::cout << "Integer part after extracting degrees: " << long_int_part << "\n" ;
    std::cout << "Fractional part after extracting degrees: " << long_frac_part << "\n" ;
    init_struct->long_min_part = (int)(long_int_part) ;
    long_full_degrees_left = long_full_degrees_left - long_int_part ;
    long_full_degrees_left = long_full_degrees_left*60 ;
    long_frac_part = modf(long_full_degrees_left,&long_int_part) ;
    std::cout << "Integer part after extracting minutes part: " << long_int_part << "\n" ;
    std::cout << "Fractional part after extracting minutes part: " << long_frac_part << "\n" ;
    init_struct->long_sec_part = (int)(long_int_part) ;
    init_struct->long_deg_part_str = std::to_string(init_struct->long_deg_part) ;
    init_struct->long_min_part_str = std::to_string(init_struct->long_min_part) ;
    init_struct->long_sec_part_str = std::to_string(init_struct->long_sec_part) ;
    init_struct->pointID = 0 ;
    return init_struct ;
}

__attribute__((unused)) std::vector<Lat_Long_Alt_Data> lat_long_generator(Lat_Long_Alt_Data * init_pos = nullptr, float increment_lat = 0.000001, float increment_long = 0.000001,float increment_alt = 0, int data_length = 200 , std::vector<Lat_Long_Alt_Data> * vec_to_fill = nullptr, bool random_data_req = false, Path * resulting_path = nullptr)
{
    if(init_pos == nullptr)
    {
        init_pos = new Lat_Long_Alt_Data() ;
        std::cout << init_pos ;
        init_pos->altitude = 165*meter ; //in meters
        init_pos->lat_full_degrees = 41.047056006245285 ;
        init_pos->long_full_degrees = 29.032818999130992 ;
        init_lat_long_from_values(init_pos) ;
    }
    if(vec_to_fill->empty())
    {
        vec_to_fill = new std::vector<Lat_Long_Alt_Data> ;
    }
    if(resulting_path == nullptr)
    {
        resulting_path = new Path() ;
    }



    vec_to_fill->push_back(*init_pos) ;

    for(int i = 0 ; i < data_length - 1 ; i++)
    {
        Lat_Long_Alt_Data temp_data ;
        temp_data.lat_full_degrees = init_pos->lat_full_degrees + float(i)*increment_lat ;
        temp_data.long_full_degrees = init_pos->long_full_degrees + float(i)*increment_long ;
        temp_data.altitude = init_pos->altitude + float(i)*increment_alt ;
    }

    return *vec_to_fill ;
}

Path points_to_path(std::vector<Lat_Long_Alt_Data> * points_vec, Path * result = nullptr, int begin_pos = 0, int end_pos = 5)
{
    if(begin_pos == end_pos)
    {
        return * result ;
    }
    if(points_vec->empty())
    {
        return *result ;
    }
    if(result == nullptr)
    {
        result = new Path() ;
    }

    for(int i = begin_pos ; i < end_pos ; i++)
    {

    }
    return *result ;
}