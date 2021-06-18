/**
 * @file Sub.cpp
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../import/Numcpp.h"

std::vector<float> Numcpp::sub(std::vector<float> list1, std::vector<float> list2)
{
    if(list1.size() != list2.size())
    {
        return list1;
    }
    for(int i = 0; i < list1.size(); i ++)
    {
        list1[i] -= list2[i];
    }
    return list1;
}
std::vector<std::vector<float>> Numcpp::sub(std::vector<std::vector<float>> list1, std::vector<std::vector<float>> list2)
{
    if(list1.size() != list2.size())
    {
        return list1;
    }
    for(int j = 0; j < list1.size(); j ++)
    {
        list1[j] = sub(list1[j], list2[j]);
    }
    return list1;
}
std::vector<std::vector<std::vector<float>>> Numcpp::sub(std::vector<std::vector<std::vector<float>>> list1, std::vector<std::vector<std::vector<float>>> list2)
{
    if(list1.size() != list2.size())
    {
        return list1;
    }
    for(int k = 0; k < list1.size(); k ++)
    {
        list1[k] = sub(list1[k], list2[k]);
    }
    return list1;
}

////////////////////////////////////////

void Numcpp::sub(std::vector<float> list)
{
    m_list1D = sub(m_list1D, list);
}
void Numcpp::sub(std::vector<std::vector<float>> list)
{
    m_list2D = sub(m_list2D, list);
}
void Numcpp::sub(std::vector<std::vector<std::vector<float>>> list)
{
    m_list3D = sub(m_list3D, list);
}