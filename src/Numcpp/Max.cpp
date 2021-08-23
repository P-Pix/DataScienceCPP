/**
 * @file Max.cpp
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Numcpp.hpp"

float Numcpp::max(std::vector<float> list)
{
    float value = list[0];
    for(int i = 1; i < list.size(); i ++)
    {
        if(value < list[i])
        {
            value = list[i];
        }
    }
    return value;
}
float Numcpp::max(std::vector<std::vector<float>> list)
{
    float value = list[0][0];
    for(int j = 1; j < list.size(); j ++)
    {
        float test = max(list[j]);
        if(value < test)
        {
            value = test;
        }
    }
    return value;
}
float Numcpp::max(std::vector<std::vector<std::vector<float>>> list)
{
    float value = list[0][0][0];
    for(int k = 1; k < list.size(); k ++)
    {
        float test = max(list[k]);
        if(value < test)
        {
            value = test;
        }
    }
    return value;
}

float Numcpp::max1D(void)
{
    return max(m_list1D);
}
float Numcpp::max2D(void)
{
    return max(m_list2D);
}
float Numcpp::max3D(void)
{
    return max(m_list3D);
}