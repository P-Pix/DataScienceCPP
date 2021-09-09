/**
 * @file Sort.cpp
 * @author Guillaume LEMONNIER
 * @date 2021-08-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Numcpp.hpp"

std::vector<float> Numcpp::sort1D(void)
{
    bool correctlyorganize = false;
    std::vector<float> clone;
    while(!correctlyorganize)
    {
        correctlyorganize = true;
        clone = m_list1D;
        for(int i = 0; i < m_list1D.size() - 1; i ++)
        {
            if(m_list1D[i] > clone[i + 1])
            {
                correctlyorganize = false;
                clone[i] = m_list1D[i + 1];
                clone[i + 1] = m_list1D[i];
            }
            m_list1D = clone;
        }
    }
    return m_list1D;
}

std::vector<std::vector<float>> Numcpp::sort2D(void)
{
    bool correctlyorganize = false;
    std::vector<std::vector<float>> clone;
    while(!correctlyorganize)
    {
        correctlyorganize = true;
        clone = m_list2D;
        for(int i = 0; i < m_list2D.size(); i ++)
        {
            for(int j = 0; j < m_list2D[i].size(); j ++)
            {
                if((j + 1) == m_list2D[i].size() && (i + 1) < m_list2D.size())
                {
                    if(m_list2D[i][j] > clone[i + 1][0])
                    {
                        correctlyorganize = false;
                        clone[i][j] = m_list2D[i + 1][0];
                        clone[i + 1][0] = m_list2D[i][j];
                    }
                }
                else if(m_list2D[i][j] > clone[i][j + 1])
                {
                    correctlyorganize = false;
                    clone[i][j] = m_list2D[i][j + 1];
                    clone[i][j + 1] = m_list2D[i][j];
                }
                m_list2D = clone;
            }
        }
    }
    return m_list2D;
}

std::vector<std::vector<std::vector<float>>> Numcpp::sort3D(void)
{
    return m_list3D;
}