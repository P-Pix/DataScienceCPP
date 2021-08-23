/**
 * @file Constructor.cpp
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/ImageInfo.hpp"

///////////////////////////////////////

ImageInfo::ImageInfo(void)
{

}
ImageInfo::ImageInfo(const char *name)
{
    newImage(name);
}
ImageInfo::~ImageInfo(void)
{

}

///////////////////////////////////////

void ImageInfo::newImage(const char *name)
{
    m_nameimage = name;
    m_Image.loadFromFile(m_nameimage);

    imageSize();

    imageBlue();
    imageGreen();
    imageRed();

    imageRGB();
}