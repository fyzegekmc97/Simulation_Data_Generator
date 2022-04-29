#include "Geometric_Data_Generator.h"
#include <cmath>
#include <iomanip>


__attribute__((unused)) Lat_Long_Alt_Data * init_lat_long_alt_from_values(Lat_Long_Alt_Data * init_struct)
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

__attribute__((unused)) Lat_Long_Data * init_lat_long_from_values(Lat_Long_Data * init_struct)
{
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

__attribute__((unused)) std::vector<Lat_Long_Alt_Data> lat_long_generator(Lat_Long_Alt_Data * init_pos = nullptr, float increment_lat = 0.000001, float increment_long = 0.000001,float increment_alt = 0, int data_length = 200 , std::vector<Lat_Long_Alt_Data> * vec_to_fill = nullptr, bool random_data_req = false, Path_Lat_Long_Alt * resulting_path = nullptr)
{
    if(init_pos == nullptr)
    {
        init_pos = new Lat_Long_Alt_Data() ;
        std::cout << init_pos ;
        init_pos->altitude = 165*meter ; //in meters
        init_pos->lat_full_degrees = 41.047056006245285 ;
        init_pos->long_full_degrees = 29.032818999130992 ;
        init_lat_long_alt_from_values(init_pos) ;
    }
    if(vec_to_fill->empty())
    {
        vec_to_fill = new std::vector<Lat_Long_Alt_Data> ;
    }
    if(resulting_path == nullptr)
    {
        resulting_path = new Path_Lat_Long_Alt() ;
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

__attribute__((unused)) Path_Lat_Long points_to_path(std::vector<Lat_Long_Data> * points_vec, Path_Lat_Long * result = nullptr, unsigned long begin_pos = 0, unsigned long end_pos = 5)
{
    if(begin_pos == end_pos)
    {
        return * result ;
    }

    if(points_vec->empty())
    {
        if(result == nullptr)
        {
            result = new Path_Lat_Long() ;
        }
        return *result ;
    }

    if(end_pos > points_vec->size())
    {
        end_pos = points_vec->size() - 1 ;
    }

    if(end_pos - begin_pos > points_vec->size())
    {
        begin_pos = 0 ;
        end_pos = points_vec->size() ;
    }

    if(result == nullptr)
    {
        result = new Path_Lat_Long() ;
    }

    unsigned int result_counter = 0 ;

    for(unsigned long i = begin_pos ; i <= end_pos - 1 ; i++)
    {
        result->points[result_counter].lat_full_degrees = points_vec->at(i).lat_full_degrees ;
        result->points[result_counter].long_full_degrees = points_vec->at(i).long_full_degrees ;
        init_lat_long_from_values(&(result->points[result_counter])) ;
        result->points[result_counter+1].lat_full_degrees = points_vec->at(i+1).lat_full_degrees ;
        result->points[result_counter+1].long_full_degrees = points_vec->at(i+1).long_full_degrees ;
        result->connecting_lines->point1 = result->points[result_counter] ;
        result->connecting_lines->point2 = result->points[result_counter+1] ;
        result_counter++ ;
    }
    return *result ;
}

void lla_to_xyz(Lat_Long_Alt_Data * lla_data = nullptr, Cartesian_Coordinates * xyz_coords = nullptr)
{
    if(lla_data == nullptr)
    {
        std::cout << "No latitude, longitude, altitude data \n" << "Creating new latitude longitude altitude \n";
        lla_data = new Lat_Long_Alt_Data() ;
    }
    if(xyz_coords == nullptr)
    {
        xyz_coords = new Cartesian_Coordinates() ;
    }
    double lat_radians = lla_data->lat_full_degrees * M_PI / 180 ;
    double long_radians = lla_data->long_full_degrees * M_PI / 180 ;
    xyz_coords->x = (radius_of_earth + lla_data->altitude) * cos(lat_radians) ;
    xyz_coords->y = (radius_of_earth + lla_data->altitude) *  cos(lat_radians) * sin(long_radians) ;
    xyz_coords->z = (radius_of_earth + lla_data->altitude) * sin(lat_radians) ;
}

void xyz_to_lla(Cartesian_Coordinates * xyz_coords = nullptr, Lat_Long_Alt_Data * lla_data = nullptr)
{
    if(xyz_coords == nullptr)
    {
        xyz_coords = new Cartesian_Coordinates() ;
        xyz_coords->x = 4211.954 * kilometer ;
        xyz_coords->y = 2337.879 * kilometer ;
        xyz_coords->z = 4166.474 * kilometer ;
    }
    if(lla_data == nullptr)
    {
        lla_data = new Lat_Long_Alt_Data() ;
    }
    lla_data->lat_full_degrees = std::asin((float)(xyz_coords->z / radius_of_earth)) ;
    lla_data->long_full_degrees = std::atan2(xyz_coords->y,xyz_coords->x) ;
    lla_data->altitude = std::sqrt((xyz_coords->x * xyz_coords->x) + (xyz_coords->y * xyz_coords->y) + (xyz_coords->z * xyz_coords->z)) - radius_of_earth ;
}
