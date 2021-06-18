/**
 * @file PrivateIsEqual.cpp
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../import/Numcpp.h"

std::vector<bool> Numcpp::isEqual(std::vector<float> list1, std::vector<float> list2)
{
    std::vector<bool> vect;
    if(list1.size() != list2.size())
    {
        return vect;
    }
    for(int i = 0; i < list1.size(); i ++)
    {
        vect.push_back(list1[i] == list2[i]);
    }
    return vect;
}
std::vector<std::vector<bool>> Numcpp::isEqual(std::vector<std::vector<float>> list1, std::vector<std::vector<float>> list2)
{
    std::vector<std::vector<bool>> vect;
    if(list1.size() != list2.size())
    {
        return vect;
    }
    for(int j = 0; j < list1.size(); j ++)
    {
        vect.push_back(isEqual(list1[j], list2[j]));
    }
    return vect;
}
std::vector<std::vector<std::vector<bool>>> Numcpp::isEqual(std::vector<std::vector<std::vector<float>>> list1, std::vector<std::vector<std::vector<float>>> list2)
{
    std::vector<std::vector<std::vector<bool>>> vect;
    if(list1.size() != list2.size())
    {
        return vect;
    }
    for(int k = 0; k < list1.size(); k ++)
    {
        vect.push_back(isEqual(list1[k], list2[k]));
    }
    return vect;
}

////////////////////////////////////////

std::vector<bool> Numcpp::isEqual(std::vector<float> list)
{
    return isEqual(m_list1D, list);
}
std::vector<std::vector<bool>> Numcpp::isEqual(std::vector<std::vector<float>> list)
{
    return isEqual(m_list2D, list);
}
std::vector<std::vector<std::vector<bool>>> Numcpp::isEqual(std::vector<std::vector<std::vector<float>>> list)
{
    return isEqual(m_list3D, list);
}