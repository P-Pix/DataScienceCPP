/**
 * @file Publiclist.cpp
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-06-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../import/Numcpp.h"

void Numcpp::listZero1D(unsigned int x)
{
    m_list1D.clear();
    for(int i = 0; i < x; i ++)
    {
        m_list1D.push_back(0);
    }
}

void Numcpp::listZero2D(unsigned int x, unsigned int y)
{
    m_list2D.clear();
    for(int j = 0; j < y; j ++)
    {
        std::vector<float> vector1D;
        vector1D.clear();
        for(int i = 0; i < x; i ++)
        {
            vector1D.push_back(0);
        }
        m_list2D.push_back(vector1D);
    }
}

void Numcpp::listZero3D(unsigned int x, unsigned int y, unsigned int z)
{
    m_list3D.clear();
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
        m_list3D.push_back(vector2D);
    }
}