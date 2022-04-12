#include "Geometric_Data_Generator.h"

__attribute__((unused)) Lat_Long_Alt_Data * init_lat_long_from_values(Lat_Long_Alt_Data * init_struct)
{
    init_struct->altitude_str = std::to_string(init_struct->altitude) ;
    float lat_int_part ;
    auto lat_frac_part = (float)(modf((double)init_struct->lat_full_degrees,(double *)(&lat_int_part))) ;
    std::cout << lat_int_part ;
    std::cout << lat_frac_part ;
    init_struct->lat_deg_part = (int)(lat_int_part) ;
    init_struct->lat_min_part = (int)(modf((double)((init_struct->lat_full_degrees - lat_int_part)*60),(double *)(&lat_int_part))) ;
    float lat_full_seconds = init_struct->lat_full_degrees*3600 ;
    init_struct->lat_sec_part = (int)(lat_full_seconds - (float)(init_struct->lat_deg_part*3600) - (float)(init_struct->lat_min_part*60)) ;
    init_struct->lat_deg_part_str = std::to_string(init_struct->lat_deg_part) ;
    init_struct->lat_min_part_str = std::to_string(init_struct->lat_min_part) ;
    init_struct->lat_sec_part_str = std::to_string(init_struct->lat_sec_part) ;
    init_struct->long_full_degrees_str = std::to_string(init_struct->long_full_degrees) ;
    float long_int_part ;
    auto long_frac_part = (float)(modf((double)init_struct->long_full_degrees,(double *)(&long_int_part))) ;
    std::cout << long_int_part ;
    std::cout << long_frac_part ;
    init_struct->long_deg_part = (int)(long_int_part) ;
    init_struct->long_min_part = (int)(modf((double)((init_struct->lat_full_degrees - lat_int_part)*60),(double *)(&lat_int_part))) ;
    float long_full_seconds = init_struct->long_full_degrees*3600 ;
    init_struct->long_sec_part = (int)(long_full_seconds - (float)(init_struct->long_deg_part*3600) - (float)(init_struct->long_min_part*60)) ;
    init_struct->long_deg_part_str = std::to_string(init_struct->long_deg_part) ;
    init_struct->long_min_part_str = std::to_string(init_struct->long_min_part) ;
    init_struct->long_sec_part_str = std::to_string(init_struct->long_sec_part) ;
    return init_struct ;
}

__attribute__((unused)) std::vector<Lat_Long_Alt_Data> * lat_long_generator(Lat_Long_Alt_Data * init_pos, float increment_lat, float increment_long,
                                                  float increment_alt, int data_length, std::vector<Lat_Long_Alt_Data> * vec_to_fill)
{
    if(init_pos == nullptr)
    {
        init_pos = new Lat_Long_Alt_Data() ;
        std::cout << init_pos ;
        init_pos->altitude = 165*meter ; //in meters
        init_pos->lat_full_degrees = 41.047056006245285 ;
        init_pos->long_full_degrees = 29.032818999130992 ;

    }
    if(vec_to_fill->empty())
    {
        vec_to_fill = new std::vector<Lat_Long_Alt_Data> ;
    }

    for(int i = 0 ; i < data_length ; i++)
    {
        //fill here
    }

    return vec_to_fill ;
}
