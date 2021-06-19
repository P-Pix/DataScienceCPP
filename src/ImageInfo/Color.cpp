/**
 * @file Color.cpp
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../import/ImageInfo.h"

void ImageInfo::imageRed()
{
    m_Red.clear();
    for(int j = 0; j < m_height; j ++)
    {
        std::vector<float> vect;
        for(int i = 0; i < m_width; i ++)
        {
            sf::Color Color;
            Color = m_Image.getPixel(i, j);
            vect.push_back(Color.r);
        }
        m_Red.push_back(vect);
    }
}
void ImageInfo::imageBlue()
{
    m_Blue.clear();
    for(int j = 0; j < m_height; j ++)
    {
        std::vector<float> vect;
        for(int i = 0; i < m_width; i ++)
        {
            sf::Color Color;
            Color = m_Image.getPixel(i, j);
            vect.push_back(Color.r);
        }
        m_Blue.push_back(vect);
    }
}
void ImageInfo::imageGreen()
{
    m_Green.clear();
    for(int j = 0; j < m_height; j ++)
    {
        std::vector<float> vect;
        for(int i = 0; i < m_width; i ++)
        {
            sf::Color Color;
            Color = m_Image.getPixel(i, j);
            vect.push_back(Color.r);
        }
        m_Green.push_back(vect);
    }
}

void ImageInfo::imageRGB()
{
    m_RGB.clear();

    m_RGB.push_back(m_Red);
    m_RGB.push_back(m_Green);
    m_RGB.push_back(m_Blue);
}