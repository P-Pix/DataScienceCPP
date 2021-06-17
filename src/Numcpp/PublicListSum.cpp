/**
 * @file PubliclistSum.cpp
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-06-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../import/Numcpp.h"

void Numcpp::sum1D(std::vector<float> list1D)
{
    if(list1D.size() != m_list1D.size())
    {
        return;
    }
    for(int i = 0; i < m_list1D.size(); i ++)
    {
        m_list1D[i] += list1D[i];
    }
}
void Numcpp::sum2D(std::vector<std::vector<float>> list2D)
{
    
}