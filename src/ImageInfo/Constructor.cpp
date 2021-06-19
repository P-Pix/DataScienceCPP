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

#include "../../import/ImageInfo.h"

///////////////////////////////////////

ImageInfo::ImageInfo()
{

}
ImageInfo::ImageInfo(const char *name)
{
    newImage(name);
}
ImageInfo::~ImageInfo()
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