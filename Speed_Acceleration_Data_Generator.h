//
// Created by feyzi on 12.04.2022.
//

#ifndef SIMULATION_DATA_GENERATOR_SPEED_ACCELERATION_DATA_GENERATOR_H
#define SIMULATION_DATA_GENERATOR_SPEED_ACCELERATION_DATA_GENERATOR_H

#include <iostream>
#include <thread>
#include <chrono>
#include <unistd.h>
#include <map>
#include <unordered_map>
#include <vector>

class Speed_Acceleration_Data_Generator
{
public:
    Speed_Acceleration_Data_Generator(int thr_rt) ;
    typedef std::vector<float> speed_data_list ;
    std::vector<float> accel_generate(int list_length, float begin_val, float end_val, std::vector<float> * ret_list) ;
    speed_data_list speed_generate(int list_length, float begin_val, float end_val, speed_data_list * ret_list) ;
    int thread_run_time_seconds ;
    void add_nums(int num1, int num2) ;
    void start_thread() ;

private:
    std::thread generator_thread ;
    typedef std::unordered_map<std::string, std::thread> thread_map ;
    thread_map tmap ;
};


#endif //SIMULATION_DATA_GENERATOR_SPEED_ACCELERATION_DATA_GENERATOR_H
