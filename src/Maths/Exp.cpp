/**
 * @file Exp.cpp
 * @author Guillaume LEMONNIER
 * @date 2021-09-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Maths.hpp"

float exp(float x)
{
    float sum = EXP;
    if(x == 0)
    {
        return 1;
    }
    else if(x > 0)
    {
        for(int i = 1; i < x; i ++)
        {
            sum *= EXP;
        }
        return sum;
    }
    else
    {
        for(int i = 1; i > x; i --)
        {
            sum /= EXP;
        }
        return sum;
    }
}