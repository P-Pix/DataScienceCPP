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

/// Library limited to 3D list
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

        /// Create a boolean vector 
        /// \param list vector test with the class list 1D
        /// \return In the vector True if they are equal, False if not
        std::vector<bool> isEqual(std::vector<float> list);

        /// Create a boolean vector 
        /// \param list vector test with the class list 2D
        /// \return In the vector True if they are equal, False if not
        std::vector<std::vector<bool>> isEqual(std::vector<std::vector<float>> list);

        /// Create a boolean vector 
        /// \param list vector test with the class list 3D
        /// \return In the vector True if they are equal, False if not
        std::vector<std::vector<std::vector<bool>>> isEqual(std::vector<std::vector<std::vector<float>>> list);

        ////////////////////////////////////////

        /// Create a boolean vector
        /// \param list vector test with the class list 1D
        /// \return In the vector True if the class list 1D is inferior, False if not
        std::vector<bool> isInferior(std::vector<float> list);

        ////////////////////////////////////////
        
        /// Found the minimal value in the class list 1D
        /// \return The minimal value floatant
        float min1D(void);

        /// Found the minimal value in the class list 2D
        /// \return The minimal value floatant
        float min2D(void);

        /// Found the minimal value in the class list 3D
        /// \return The minimal value floatant
        float min3D(void);

        ////////////////////////////////////////
        
        /// Found the maximal value in the class list 1D
        /// \return The maximal value floatant
        float max1D(void);

        /// Found the maximal value in the class list 2D
        /// \return The maximal value floatant
        float max2D(void);

        /// Found the maximal value in the class list 3D
        /// \return The maximal value floatant
        float max3D(void);

        ////////////////////////////////////////

        /// Organize the list 1D from smallest to largest 
        /// \return The vector organize
        std::vector<float> sort1D(void);

        /// Organize the list 2D from smallest to largest 
        /// \return The vector organize
        std::vector<std::vector<float>> sort2D(void);

        /// Organize the list 2D from smallest to largest 
        /// \return The vector organize
        std::vector<std::vector<std::vector<float>>> sort3D(void);

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

        /// Sum an enter list 1D and the class list 1D, both list need the same size
        /// \param list1D The list to additional to the class list 1D
        void sum1D(std::vector<float> list1D);

        /// Sum an enter list 2D and the class list 2D, both list need the same size
        /// \param list2D The list to additional to the class list 2D
        void sum2D(std::vector<std::vector<float>> list2D);

        /// Sum an enter list 3D and the class list 3D, both list need the same size
        /// \param list3D The list to additional to the class list 3D
        void sum3D(std::vector<std::vector<std::vector<float>>> list3D);

        ////////////////////////////////////////

        /// Substraction an enter list 1D and the class list 1D, both list need the same size
        /// \param list1D The list to substract to the class list 1D
        void sub1D(std::vector<float> list1D);

        /// Substraction an enter list 2D and the class list 2D, both list need the same size
        /// \param list2D The list to substract to the class list 2D
        void sub2D(std::vector<std::vector<float>> list2D);

        /// Substraction an enter list 3D and the class list 3D, both list need the same size
        /// \param list3D The list to substract to the class list 3D
        void sub3D(std::vector<std::vector<std::vector<float>>> list3D);

        ////////////////////////////////////////

        /// Multiply an enter list 1D and the class list 1D, both list need the same size
        /// \param list1D The list to multiply to the class list 1D
        void mult1D(std::vector<float> list1D);

        /// Multiply an enter list 2D and the class list 2D, both list need the same size
        /// \param list2D The list to multiply to the class list 2D
        void mult2D(std::vector<std::vector<float>> list2D);

        /// Multiply an enter list 3D and the class list 3D, both list need the same size
        /// \param list3D The list to multiply to the class list 3D
        void mult3D(std::vector<std::vector<std::vector<float>>> list3D);

        ////////////////////////////////////////

        /// Split an enter list 1D and the class list 1D, both list need the same size
        /// \param list1D The list to split to the class list 1D
        void split1D(std::vector<float> list1D);

        /// Split an enter list 2D and the class list 2D, both list need the same size
        /// \param list2D The list to split to the class list 2D
        void split2D(std::vector<std::vector<float>> list2D);

        /// Split an enter list 3D and the class list 3D, both list need the same size
        /// \param list3D The list to split to the class list 3D
        void split3D(std::vector<std::vector<std::vector<float>>> list3D);
};

#endif