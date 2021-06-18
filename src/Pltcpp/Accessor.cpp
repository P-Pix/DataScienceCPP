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

#include "../../import/Pltcpp.h"

bool Pltcpp::isOpen()
{
    return m_Window -> isOpen();
}