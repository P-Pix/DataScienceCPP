/**
 * @file Identity.cpp
 * @author Guillaue LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-06-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Numcpp.hpp"

void Numcpp::identity1D(void)
{
    m_list1D.clear();
    m_list1D.push_back(1);
}
void Numcpp::identity2D(unsigned int size)
{
    if(size < 1)
    {
        std::cout << "size < 1" << std::endl;
        return;
    }
    m_list2D.clear();
    listZero2D(size, size);
    for(int x = 0; x < size; x ++)
    {
        m_list2D[x][x] = 1;
    }
}
void Numcpp::identity3D(unsigned int size)
{
    if(size < 1)
    {
        std::cout << "size < 1" << std::endl;
        return;
    }
    m_list3D.clear();
    listZero3D(size, size, size);
    for(int x = 0; x < size; x ++)
    {
        m_list3D[x][x][x] = 1;
    }
}
