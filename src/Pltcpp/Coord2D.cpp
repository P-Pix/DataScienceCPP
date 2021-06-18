/**
 * @file Coord2D.cpp
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../import/Pltcpp.h"

void Pltcpp::addCoord2D(float x, float y)
{
    Coord2D coord;
    coord.x = x;
    coord.y = y;
    m_VectorCoord2D.push_back(coord);
}