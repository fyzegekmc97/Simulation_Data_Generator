//
// Created by feyzi on 12.04.2022.
//

#include "Speed_Acceleration_Data_Generator.h"

void Speed_Acceleration_Data_Generator::add_nums(int num1, int num2) {
    for(int i = 0 ; i < 10000 ; i++)
    {
        num1++ ;
        num2++ ;
        std::cout << num1 << " " << num2 ;
        usleep(500000) ;
    }
}

void Speed_Acceleration_Data_Generator::start_thread() {
    generator_thread.join() ;
}

Speed_Acceleration_Data_Generator::speed_data_list Speed_Acceleration_Data_Generator::speed_generate(int list_length, float begin_val, float end_val, speed_data_list * ret_list) {

    if(ret_list == nullptr)
    {
        ret_list = new speed_data_list() ;
    }
    for(int i = 0 ; i < list_length ; i++)
    {
        float val_to_add = begin_val + (end_val - begin_val) * (float)(i) / ((float)(list_length)) ;
        ret_list->push_back(val_to_add) ;
    }

    return *ret_list ;

}

Speed_Acceleration_Data_Generator::Speed_Acceleration_Data_Generator(int thr_rt): thread_run_time_seconds(thr_rt) {

}

std::vector<float> Speed_Acceleration_Data_Generator::accel_generate(int list_length, float begin_val, float end_val,
                                                                     std::vector<float> * ret_list) {
    if(ret_list == nullptr)
    {
        ret_list = new std::vector<float>() ;
    }

    for(int i = 0 ; i < list_length ; i++)
    {
        float val_to_add = begin_val + (end_val - begin_val) * (float)(i) / (float)(list_length) ;
        ret_list->push_back(val_to_add) ;
    }

    return *ret_list ;
}
