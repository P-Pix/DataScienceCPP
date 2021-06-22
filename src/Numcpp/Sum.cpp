/**
 * @file PrivateListSum.cpp
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Numcpp.hpp"

std::vector<float> Numcpp::sum(std::vector<float> list1, std::vector<float> list2)
{
    if(list1.size() != list2.size())
    {
        return list1;
    }
    for(int i = 0; i < list1.size(); i ++)
    {
        list1[i] += list2[i];
    }
    return list1;
}
std::vector<std::vector<float>> Numcpp::sum(std::vector<std::vector<float>> list1, std::vector<std::vector<float>> list2)
{
    if(list1.size() != list2.size())
    {
        return list1;
    }
    for(int j = 0; j < list1.size(); j ++)
    {
        list1[j] = sum(list1[j], list2[j]);
    }
    return list1;
}
std::vector<std::vector<std::vector<float>>> Numcpp::sum(std::vector<std::vector<std::vector<float>>> list1, std::vector<std::vector<std::vector<float>>> list2)
{
    if(list1.size() != list2.size())
    {
        return list1;
    }
    for(int k = 0; k < list1.size(); k ++)
    {
        list1[k] = sum(list1[k], list2[k]);
    }
    return list1;
}

////////////////////////////////////////

void Numcpp::sum(std::vector<float> list)
{
    m_list1D = sum(m_list1D, list);
}
void Numcpp::sum(std::vector<std::vector<float>> list)
{
    m_list2D = sum(m_list2D, list);
}
void Numcpp::sum(std::vector<std::vector<std::vector<float>>> list)
{
    m_list3D = sum(m_list3D, list);
}