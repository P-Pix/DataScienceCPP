/**
 * @file Min.cpp
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Numcpp.h"

float Numcpp::min(std::vector<float> list)
{
    float value = list[0];
    for(int i = 1; i < list.size(); i ++)
    {
        if(value > list[i])
        {
            value = list[i];
        }
    }
    return value;
}
float Numcpp::min(std::vector<std::vector<float>> list)
{
    float value = list[0][0];
    for(int j = 1; j < list.size(); j ++)
    {
        float test = min(list[j]);
        if(value > test)
        {
            value = test;
        }
    }
    return value;
}
float Numcpp::min(std::vector<std::vector<std::vector<float>>> list)
{
    float value = list[0][0][0];
    for(int k = 1; k < list.size(); k ++)
    {
        float test = min(list[k]);
        if(value > test)
        {
            value = test;
        }
    }
    return value;
}

float Numcpp::min1D()
{
    return min(m_list1D);
}
float Numcpp::min2D()
{
    return min(m_list2D);
}
float Numcpp::min3D()
{
    return min(m_list3D);
}