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
        
        /// List 1D
        std::vector<float> m_list1D;

        /// List 2D
        std::vector<std::vector<float>> m_list2D;

        /// List 3D
        std::vector<std::vector<std::vector<float>>> m_list3D;

        ////////////////////////////////////////

        /// Print in the Terminal all element in the list
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

        /// Get the list 1D
        /// \return A vector done before
        std::vector<float> getlist1D(void);

        /// Get the list 2D
        /// \return A vector done before
        std::vector<std::vector<float>> getlist2D(void);

        /// Get the list 3D
        /// \return A vector done before
        std::vector<std::vector<std::vector<float>>> getlist3D(void);

        ////////////////////////////////////////

        /// Create a list of vector : 1D
        /// \param x number of line
        void listZero1D(unsigned int x = 1);

        /// Create a list of vector : 2D
        /// \param x number of line
        /// \param y number of column
        void listZero2D(unsigned int x = 1, unsigned int y = 1);

        /// Create a list of vector : 3D
        /// \param x number of line
        /// \param y number of column
        /// \param z number of page 
        void listZero3D(unsigned int x = 1, unsigned int y = 1, unsigned int z = 1);

        ////////////////////////////////////////

        /// Sum of an enter list 1D and the class list 1D, both list need the same size
        /// \param list1D The list to additional to the class list 1D
        void sum1D(std::vector<float> list1D);

        /// Sum of an enter list 2D and the class list 2D, both list need the same size
        /// \param list2D The list to additional to the class list 2D
        void sum2D(std::vector<std::vector<float>> list2D);

        /// Sum of an enter list 3D and the class list 3D, both list need the same size
        /// \param list3D The list to additional to the class list 3D
        void sum3D(std::vector<std::vector<std::vector<float>>> list3D);

        ////////////////////////////////////////

        /// Substraction of an enter list 1D and the class list 1D, both list need the same size
        /// \param list1D The list to substract to the class list 1D
        void sub1D(std::vector<float> list1D);

        /// Substraction of an enter list 2D and the class list 2D, both list need the same size
        /// \param list2D The list to substract to the class list 2D
        void sub2D(std::vector<std::vector<float>> list2D);

        /// Substraction of an enter list 3D and the class list 3D, both list need the same size
        /// \param list3D The list to substract to the class list 3D
        void sub3D(std::vector<std::vector<std::vector<float>>> list3D);

        ////////////////////////////////////////

        /// Print in the Terminal a 1D list
        /// \param flux cout flux for printing
        /// \param list1D 1D list
        void printlist1D(std::ostream &flux, std::vector<float> list1D);

        /// Print in the Terminal a 2D list
        /// \param flux cout flux for printing
        /// \param list2D 2D list
        void printlist2D(std::ostream &flux, std::vector<std::vector<float>> list2D);

        /// Print in the Terminal a 3D list
        /// \param flux cout flux for printing
        /// \param list3D 3D list
        void printlist3D(std::ostream &flux, std::vector<std::vector<std::vector<float>>> list3D);
};

#endif