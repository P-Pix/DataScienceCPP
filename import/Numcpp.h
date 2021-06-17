/**
 * @file Numcpp.h
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-06-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef DEF_NUMCPP
#define DEF_NUMCPP

#include <iostream>
#include <vector>

class Numcpp
{
    private:
        ////////////////////////////////////////
        
        std::vector<float> m_array1D;
        std::vector<std::vector<float>> m_array2D;
        std::vector<std::vector<std::vector<float>>> m_array3D;

    protected:

    public:
        ////////////////////////////////////////

        /// Default constructor
        Numcpp();

        /// Default destructor
        ~Numcpp();

        ////////////////////////////////////////

        /// Get the array 1D
        /// \return A vector mdone before
        std::vector<float> getArray1D();

        /// Get the array 2D
        /// \return A vector mdone before
        std::vector<std::vector<float>> getArray2D();

        /// Get the array 3D
        /// \return A vector mdone before
        std::vector<std::vector<std::vector<float>>> getArray3D();

        ////////////////////////////////////////

        /// Create a array of vector : 1D, 2D, 3D
        /// \param x number of 0 per line
        /// \param y number of 0 per column
        /// \param z number of 0 per 
        void array(float x = 0, float y = 0, float z = 0);
};

#endif