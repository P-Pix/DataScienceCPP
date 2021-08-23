/**
 * @file Print.cpp
 * @author Guillaume LEMONNIER
 * @date 2021-08-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Numcpp.hpp"
#include "..//operator<<.cpp"

void Numcpp::print(void) const
{
    std::cout << *this << std::endl;
}
void Numcpp::print1D(void) const
{
    std::cout << m_list1D << std::endl;
}
void Numcpp::print2D(void) const
{
    std::cout << m_list2D << std::endl;
}
void Numcpp::print3D(void) const
{
    std::cout << m_list3D << std::endl;
}