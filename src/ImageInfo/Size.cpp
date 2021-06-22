/**
 * @file Size.cpp
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/ImageInfo.hpp"

void ImageInfo::imageSize()
{
    m_width = m_Image.getSize().x;
    m_height = m_Image.getSize().y;
}