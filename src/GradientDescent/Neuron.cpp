/**
 * @file Neuron.cpp
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-06-19
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../import/GradientDescent.h"

void GradientDescent::cout()
{
    float derivate = 1;
    derivate /= (2 * m_VectorCoord2D.size());
    float derivatestock = 0;
    for(int x = 0; x < m_VectorCoord2D.size(); x ++)
    {
        derivatestock += ((function(m_a, m_b, m_c, m_VectorCoord2D[x].x) - m_VectorCoord2D[x].y) * (function(m_a, m_b, m_c, m_VectorCoord2D[x].x) - m_VectorCoord2D[x].y));
    }
    m_cout = derivate * derivatestock;
}

float GradientDescent::derivateA()
{
    float derivate = 1;
    derivate /= m_VectorCoord2D.size();
    float derivatestock = 0;
    for(int x = 0; x < m_VectorCoord2D.size(); x ++)
    {
        derivatestock +=  (x * (function(m_a, m_b, m_c, m_VectorCoord2D[x].x) - m_VectorCoord2D[x].y));
    }
    return derivate * derivatestock;
}
float GradientDescent::derivateB()
{
    float derivate = 1;
    derivate /= m_VectorCoord2D.size();
    float derivatestock = 0;
    for(int x = 0; x < m_VectorCoord2D.size(); x ++)
    {
        derivatestock +=  (function(m_a, m_b, m_c, m_VectorCoord2D[x].x) - m_VectorCoord2D[x].y);
    }
    return derivate * derivatestock;
}

void GradientDescent::tangeante()
{
    m_a = m_a - m_alpha * derivateA();
    m_b = m_b - m_alpha * derivateA();
    m_c = m_c - m_alpha * derivateB();
}
float GradientDescent::function(float a, float b, float c, int x)
{
    return a * x * x + b * x + c;
}