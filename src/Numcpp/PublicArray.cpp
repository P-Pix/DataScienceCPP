/**
 * @file PublicArray.cpp
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-06-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../import/Numcpp.h"

void Numcpp::array1D(float x)
{
    m_array1D.clear();
    for(int i = 0; i < x; i ++)
    {
        m_array1D.push_back(0);
    }
}

void Numcpp::array2D(float x, float y)
{
    m_array2D.clear();
    for(int j = 0; j < y; j ++)
    {
        std::vector<float> vector1D;
        vector1D.clear();
        for(int i = 0; i < x; i ++)
        {
            vector1D.push_back(0);
        }
        m_array2D.push_back(vector1D);
    }
}

void Numcpp::array3D(float x, float y, float z)
{
    m_array3D.clear();
    for(int k = 0; k < z; k ++)
    {
        std::vector<std::vector<float>> vector2D;
        vector2D.clear();
        for(int j = 0; j < y; j ++)
        {
            std::vector<float> vector1D;
            vector1D.clear();
            for(int i = 0; i < x; i ++)
            {
                vector1D.push_back(0);
            }
            vector2D.push_back(vector1D);
        }
        m_array3D.push_back(vector2D);
    }
}