/**
 * @file Test.cpp
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-06-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../import/Numcpp.h"

std::vector<bool> Numcpp::isEqual(std::vector<float> list)
{
    std::vector<bool> equal;
    for(int i = 0; i < m_list1D.size(); i ++)
    {
        equal.push_back(m_list1D[i] == list[i]);
    }
    return equal;
}