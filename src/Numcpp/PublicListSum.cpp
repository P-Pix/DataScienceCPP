/**
 * @file PubliclistSum.cpp
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-06-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../import/Numcpp.h"

void Numcpp::sum1D(std::vector<float> list1D)
{
    m_list1D = sum1D(m_list1D, list1D);
}
void Numcpp::sum2D(std::vector<std::vector<float>> list2D)
{
    m_list2D = sum2D(m_list2D, list2D);
}
void Numcpp::sum3D(std::vector<std::vector<std::vector<float>>> list3D)
{
    m_list3D = sum3D(m_list3D, list3D);
}