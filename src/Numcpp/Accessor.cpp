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

#include "../../import/Numcpp.h"

std::vector<float> Numcpp::getArray1D()
{
    return m_array1D;
}
std::vector<std::vector<float>> Numcpp::getArray2D()
{
    return m_array2D;
}
std::vector<std::vector<std::vector<float>>> Numcpp::getArray3D()
{
    return m_array3D;
}