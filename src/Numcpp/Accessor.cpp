/**
 * @file Accessor.cpp
 * @author Guillaume LEMONNIER 
 * @brief 
 * @version 0.1
 * @date 2021-06-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Numcpp.hpp"

std::vector<float> Numcpp::getlist1D(void)
{
    return m_list1D;
}
std::vector<std::vector<float>> Numcpp::getlist2D(void)
{
    return m_list2D;
}
std::vector<std::vector<std::vector<float>>> Numcpp::getlist3D(void)
{
    return m_list3D;
}