#ifndef SIMULATION_DATA_GENERATOR_GEOMETRIC_DATA_GENERATOR_H
#define SIMULATION_DATA_GENERATOR_GEOMETRIC_DATA_GENERATOR_H

#include <string>
#include <vector>
#include <iostream>
#include <cmath>

#define kilometer 1000
#define meter 1
#define centimeter 0.01
#define milimeter 0.001

struct Lat_Long_Data
{
    int lat_deg_part ;
    std::string lat_deg_part_str ;
    int lat_min_part ;
    std::string lat_min_part_str ;
    int lat_sec_part ;
    std::string lat_sec_part_str ;
    float lat_full_degrees ;
    std::string lat_full_degrees_str ;
    int long_deg_part ;
    std::string long_deg_part_str ;
    int long_min_part ;
    std::string long_min_part_str ;
    int long_sec_part ;
    std::string long_sec_part_str ;
    float long_full_degrees ;
    std::string long_full_degrees_str ;
};

struct Lat_Long_Alt_Data
{
    int lat_deg_part ;
    std::string lat_deg_part_str ;
    int lat_min_part ;
    std::string lat_min_part_str ;
    int lat_sec_part ;
    std::string lat_sec_part_str ;
    float lat_full_degrees ;
    std::string lat_full_degrees_str ;
    int long_deg_part ;
    std::string long_deg_part_str ;
    int long_min_part ;
    std::string long_min_part_str ;
    int long_sec_part ;
    std::string long_sec_part_str ;
    float long_full_degrees ;
    std::string long_full_degrees_str ;
    float altitude ;
    std::string altitude_str ;
    long long pointID ;
};

struct Map_Line
{
    Lat_Long_Data point1 ;
    Lat_Long_Data point2 ;
};

struct Path
{
    Lat_Long_Alt_Data points[5000] ;
    Map_Line connecting_lines[4999] ;
};

struct Vehicle_Dimensions
{
    float vehicle_length ;
    std::string vehicle_length_str ;
    float vehicle_width ;
    std::string vehicle_width_str ;
    float vehicle_height ;
    std::string vehicle_height_str ;
    float wheelbase_length ;
    std::string wheelbase_length_str ;
    float front_overhang_length ;
    std::string front_overhang_length_str ;
    float rear_overhang ;
    std::string rear_overhang_str ;
};

typedef Lat_Long_Alt_Data Lat_Long_Alt_Data ;
typedef Lat_Long_Data Lat_Long_Data ;
typedef Path Path ;
typedef Vehicle_Dimensions Vehicle_Dimensions ;
//41.047056006245285, 29.032818999130992
std::vector<Lat_Long_Alt_Data> lat_long_generator(Lat_Long_Alt_Data * init_pos, float increment_lat, float increment_long, float increment_alt, int data_length, std::vector<Lat_Long_Alt_Data> * vec_to_fill, bool random_data_req, Path * resulting_path);

__attribute__((unused)) Lat_Long_Alt_Data * init_lat_long_from_values(Lat_Long_Alt_Data * init_struct) ;

Path points_to_path(std::vector<Lat_Long_Alt_Data> * points_vec, Path * result, int begin_pos, int end_pos ) ;

class Geometric_Data_Generator {
    Lat_Long_Alt_Data lat_long_alt_data ;
};


#endif //SIMULATION_DATA_GENERATOR_GEOMETRIC_DATA_GENERATOR_H
