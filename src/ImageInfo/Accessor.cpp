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

#include "../../include/ImageInfo.h"

///////////////////////////////////////

std::vector<std::vector<float>> ImageInfo::getRed() const
{
    return m_Red;
}
std::vector<std::vector<float>> ImageInfo::getBlue() const
{
    return m_Blue;
}
std::vector<std::vector<float>> ImageInfo::getGreen() const
{
    return m_Green;
}
std::vector<std::vector<std::vector<float>>> ImageInfo::getRGB() const
{
    return m_RGB;
}

///////////////////////////////////////

const char *ImageInfo::getAdress() const
{
    return m_nameimage;
}

///////////////////////////////////////

unsigned int ImageInfo::getHeight() const
{
    return m_height;
}
unsigned int ImageInfo::getWidth() const
{
    return m_width;
}