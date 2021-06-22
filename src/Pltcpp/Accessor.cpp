/**
 * @file Accessor.cpp
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Pltcpp.hpp"

bool Pltcpp::isOpen()
{
    return m_Window -> isOpen();
}
std::vector<GradientDescent::Coord2D> Pltcpp::getListCoord2D() const
{
    return m_VectorCoord2D;
}