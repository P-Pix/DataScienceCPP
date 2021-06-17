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

        ////////////////////////////////////////

        /// Print in the Terminal all element in the a list
        /// \param flux The flux of ostream
        void printList1D(std::ostream &flux);

    protected:

    public:
        ////////////////////////////////////////

        /// Default constructor
        Numcpp(void);

        /// Default destructor
        ~Numcpp(void);

        ////////////////////////////////////////

        /// Get the array 1D
        /// \return A vector mdone before
        std::vector<float> getArray1D(void);

        /// Get the array 2D
        /// \return A vector mdone before
        std::vector<std::vector<float>> getArray2D(void);

        /// Get the array 3D
        /// \return A vector mdone before
        std::vector<std::vector<std::vector<float>>> getArray3D(void);

        ////////////////////////////////////////

        /// Create a array of vector : 1D
        /// \param x number of 0 per line
        void arrayZero1D(float x = 1);

        /// Create a array of vector : 2D
        /// \param x number of 0 per line
        /// \param y number of 0 per column
        void arrayZero2D(float x = 1, float y = 1);

        /// Create a array of vector : 3D
        /// \param x number of 0 per line
        /// \param y number of 0 per column
        /// \param z number of 0 per 
        void arrayZero3D(float x = 1, float y = 1, float z = 1);

        ////////////////////////////////////////

        /// Print in the Terminal a 1D array
        /// \param flux cout flux for printing
        /// \param list1D 1D array
        void printArray1D(std::ostream &flux, std::vector<float> list1D);

        /// Print in the Terminal a 2D array
        /// \param flux cout flux for printing
        /// \param list2D 2D array
        void printArray2D(std::ostream &flux, std::vector<std::vector<float>> list2D);

        /// Print in the Terminal a 3D array
        /// \param flux cout flux for printing
        /// \param list3D 3D array
        void printArray3D(std::ostream &flux, std::vector<std::vector<std::vector<float>>> list3D);
};

#endif