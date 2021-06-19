/**
 * @file GradientDescent.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-06-19
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef DEF_GRADIENTDESCENT
#define DEF_GRADIENTDESCENT

#include <iostream>
#include <vector>


class GradientDescent
{
    private:
        ////////////////////////////////////////

        /// 
        bool    m_running = true;

        /// Neuron parameter
        float   m_a = 0,
                m_b = 0,
                m_c = 0;
        
        /// Cout value
        float   m_cout = 1;

        /// Alpha value
        float   m_alpha = 1;

        /// Number of execution
        int     m_couter = 0;
        
        ////////////////////////////////////////

        /// Neuron axx + bx + c
        float function(float a, float b, float c, int x);

        /// 
        void cout();

        float derivateA();
        float derivateB();

        void tangeante();

    protected:
        ////////////////////////////////////////

        /// Struct to create a point in the graphic
        /// \param x value for abscissa
        /// \param y value for ordered
        struct Coord2D
        {
            float x = 0;
            float y = 0;
        };
    
    private:
        std::vector<Coord2D> m_vectorcoord;

    public:
        ////////////////////////////////////////

        /// Default constructor
        GradientDescent();

        /// Destructor
        ~GradientDescent();

        ////////////////////////////////////////

        /// \return True if the gradient descent is ended, False if not
        bool isRunning();

        /// \return list of points
        std::vector<Coord2D> getListPoint();

        ////////////////////////////////////////
        
        /// Transform two value x and y to Coord and put it in the Vector Coord2D
        /// \param x abscissa value
        /// \param y ordered value
        void addCoord2D(float x, float y);

        ////////////////////////////////////////

        /// One gradient descent part
        void execution();
};

#endif