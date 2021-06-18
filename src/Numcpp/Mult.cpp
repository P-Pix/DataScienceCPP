/**
 * @file Mult.cpp
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../import/Numcpp.h"

std::vector<float> Numcpp::mult1D(std::vector<float> list)
{
    std::vector<float> vect;
    vect.push_back(m_list1D[0] * list[0]);
    return vect;
}
std::vector<std::vector<float>> Numcpp::mult2D(std::vector<std::vector<float>> list)
{
    
}