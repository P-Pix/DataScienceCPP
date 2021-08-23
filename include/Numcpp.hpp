/**
 * @file Numcpp.hpp
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-06-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _NUMCPP_HPP_
#define _NUMCPP_HPP_

#include <iostream>
#include <vector>

using namespace std;

/// Library limited to 3D list
class Numcpp
{
    private:
        ////////////////////////////////////////
        
        /// List 1D
        vector<float> m_list1D;

        /// List 2D
        vector<vector<float>> m_list2D;

        /// List 3D
        vector<vector<vector<float>>> m_list3D;

        ////////////////////////////////////////

        /// Relative equal 1D
        /// \param list1 first list compare
        /// \param list2 second list compare
        /// \return vector where True if the two value in the same position are equal False if not
        vector<bool> isEqual(vector<float> list1, vector<float> list2);

        /// Relative equal 2D
        /// \param list1 first list compare
        /// \param list2 second list compare
        /// \return vector where True if the two value in the same position are equal False if not
        vector<vector<bool>> isEqual(vector<vector<float>> list1, vector<vector<float>> list2);

        /// Relative equal 3D
        /// \param list1 first list compare
        /// \param list2 second list compare
        /// \return vector where True if the two value in the same position are equal False if not
        vector<vector<vector<bool>>> isEqual(vector<vector<vector<float>>> list1, vector<vector<vector<float>>> list2);

        ////////////////////////////////////////

        /// Relative inferior 1D
        /// \param list1 first list compare
        /// \param list2 second list compare
        /// \return vector where True if the first value is inferior at the same position Falseif not
        vector<bool> isInferior(vector<float> list1, vector<float> list2);

        /// Relative inferior 2D
        /// \param list1 first list compare
        /// \param list2 second list compare
        /// \return vector where True if the first value is inferior at the same position Falseif not
        vector<vector<bool>> isInferior(vector<vector<float>> list1, vector<vector<float>> list2);

        /// Relative inferior 3D
        /// \param list1 first list compare
        /// \param list2 second list compare
        /// \return vector where True if the first value is inferior at the same position Falseif not
        vector<vector<vector<bool>>> isInferior(vector<vector<vector<float>>> list1, vector<vector<vector<float>>> list2);

        ////////////////////////////////////////

        /// Relative inferior or equal 1D
        /// \param list1 first list compare
        /// \param list2 second list compare
        /// \return vector where True if the first value is inferior or equal at the same position Falseif not
        vector<bool> isInferiorOrEqual(vector<float> list1, vector<float> list2);

        /// Relative inferior or equal 2D
        /// \param list1 first list compare
        /// \param list2 second list compare
        /// \return vector where True if the first value is inferior or equal at the same position Falseif not
        vector<vector<bool>> isInferiorOrEqual(vector<vector<float>> list1, vector<vector<float>> list2);

        /// Relative inferior or equal 3D
        /// \param list1 first list compare
        /// \param list2 second list compare
        /// \return vector where True if the first value is inferior or equal at the same position Falseif not
        vector<vector<vector<bool>>> isInferiorOrEqual(vector<vector<vector<float>>> list1, vector<vector<vector<float>>> list2);

        ////////////////////////////////////////

        /// Relative superior 1D
        /// \param list1 first list compare
        /// \param list2 second list compare
        /// \return vector where True if the first value is superior at the same position Falseif not
        vector<bool> isSuperior(vector<float> list1, vector<float> list2);

        /// Relative superior 2D
        /// \param list1 first list compare
        /// \param list2 second list compare
        /// \return vector where True if the first value is superior at the same position Falseif not
        vector<vector<bool>> isSuperior(vector<vector<float>> list1, vector<vector<float>> list2);

        /// Relative superior 3D
        /// \param list1 first list compare
        /// \param list2 second list compare
        /// \return vector where True if the first value is superior at the same position Falseif not
        vector<vector<vector<bool>>> isSuperior(vector<vector<vector<float>>> list1, vector<vector<vector<float>>> list2);

        ////////////////////////////////////////

        /// Relative inferior or equal 1D
        /// \param list1 first list compare
        /// \param list2 second list compare
        /// \return vector where True if the first value is inferior or equal at the same position Falseif not
        vector<bool> isSuperiorOrEqual(vector<float> list1, vector<float> list2);

        /// Relative inferior or equal 2D
        /// \param list1 first list compare
        /// \param list2 second list compare
        /// \return vector where True if the first value is inferior or equal at the same position Falseif not
        vector<vector<bool>> isSuperiorOrEqual(vector<vector<float>> list1, vector<vector<float>> list2);

        /// Relative inferior or equal 3D
        /// \param list1 first list compare
        /// \param list2 second list compare
        /// \return vector where True if the first value is inferior or equal at the same position Falseif not
        vector<vector<vector<bool>>> isSuperiorOrEqual(vector<vector<vector<float>>> list1, vector<vector<vector<float>>> list2);

        ////////////////////////////////////////

        /// Relative min 1D
        /// \param list1 list who receve the result
        /// \return minimum value
        float min(vector<float> list1);

        /// Relative min 2D
        /// \param list1 list who receve the result
        /// \return minimum value
        float min(vector<vector<float>> list1);

        /// Relative min 3D
        /// \param list1 list who receve the result
        /// \return minimum value
        float min(vector<vector<vector<float>>> list1);

        ////////////////////////////////////////

        /// Relative max 1D
        /// \param list1 list who receve the result
        /// \return maximum value
        float max(vector<float> list1);

        /// Relative max 2D
        /// \param list1 list who receve the result
        /// \return maximum value
        float max(vector<vector<float>> list1);

        /// Relative max 3D
        /// \param list1 list who receve the result
        /// \return maximum value
        float max(vector<vector<vector<float>>> list1);

        ////////////////////////////////////////

        /// Relative sum 1D
        /// \param list1 list who receve the result
        /// \param list2 list who send the value
        /// \return vector with the result
        vector<float> sum(vector<float> list1, vector<float> list2);

        /// Relative sum 2D
        /// \param list1 list who receve the result
        /// \param list2 list who send the value
        /// \return vector with the result
        vector<vector<float>> sum(vector<vector<float>> list1, vector<vector<float>> list2);

        /// Relative sum 3D
        /// \param list1 list who receve the result
        /// \param list2 list who send the value
        /// \return vector with the result
        vector<vector<vector<float>>> sum(vector<vector<vector<float>>> list1, vector<vector<vector<float>>> list2);

        ////////////////////////////////////////

        /// Relative sub 1D
        /// \param list1 list who receve the result
        /// \param list2 list who send the value
        /// \return vector with the result
        vector<float> sub(vector<float> list1, vector<float> list2);

        /// Relative sub 2D
        /// \param list1 list who receve the result
        /// \param list2 list who send the value
        /// \return vector with the result
        vector<vector<float>> sub(vector<vector<float>> list1, vector<vector<float>> list2);

        /// Relative sub 3D
        /// \param list1 list who receve the result
        /// \param list2 list who send the value
        /// \return vector with the result
        vector<vector<vector<float>>> sub(vector<vector<vector<float>>> list1, vector<vector<vector<float>>> list2);

    protected:

    public:
        ////////////////////////////////////////

        /// Default constructor
        /// Create a 1D, 2D, 3D list with only one element : 0
        Numcpp(void);

        /// Default destructor
        ~Numcpp(void);

        ////////////////////////////////////////

        /// Get the list 1D
        /// \return A vector done before
        vector<float> getlist1D(void);

        /// Get the list 2D
        /// \return A vector done before
        vector<vector<float>> getlist2D(void);

        /// Get the list 3D
        /// \return A vector done before
        vector<vector<vector<float>>> getlist3D(void);

        ////////////////////////////////////////

        /// Create a boolean vector 
        /// \param list vector test with the class list 1D
        /// \return In the vector True if they are equal, False if not
        vector<bool> isEqual(vector<float> list);

        /// Create a boolean vector 
        /// \param list vector test with the class list 2D
        /// \return In the vector True if they are equal, False if not
        vector<vector<bool>> isEqual(vector<vector<float>> list);

        /// Create a boolean vector 
        /// \param list vector test with the class list 3D
        /// \return In the vector True if they are equal, False if not
        vector<vector<vector<bool>>> isEqual(vector<vector<vector<float>>> list);

        ////////////////////////////////////////

        /// Create a boolean vector
        /// \param list vector test with the class list 1D
        /// \return In the vector True if the class list 1D is inferior, False if not
        vector<bool> isInferior(vector<float> list);

        /// Create a boolean vector
        /// \param list vector test with the class list 2D
        /// \return In the vector True if the class list 2D is inferior, False if not
        vector<vector<bool>> isInferior(vector<vector<float>> list);

        /// Create a boolean vector
        /// \param list vector test with the class list 3D
        /// \return In the vector True if the class list 3D is inferior, False if not
        vector<vector<vector<bool>>> isInferior(vector<vector<vector<float>>> list);

        ////////////////////////////////////////

        /// Create a boolean vector
        /// \param list vector test with the class list 1D
        /// \return In the vector True if the class list 1D is inferior or equal, False if not
        vector<bool> isInferiorOrEqual(vector<float> list);

        /// Create a boolean vector
        /// \param list vector test with the class list 2D
        /// \return In the vector True if the class list 2D is inferior or equal, False if not
        vector<vector<bool>> isInferiorOrEqual(vector<vector<float>> list);

        /// Create a boolean vector
        /// \param list vector test with the class list 3D
        /// \return In the vector True if the class list 3D is inferior or equal, False if not
        vector<vector<vector<bool>>> isInferiorOrEqual(vector<vector<vector<float>>> list);

        ////////////////////////////////////////

        /// Create a boolean vector
        /// \param list vector test with the class list 1D
        /// \return In the vector True if the class list 1D is superior or equal, False if not
        vector<bool> isSuperiorOrEqual(vector<float> list);

        /// Create a boolean vector
        /// \param list vector test with the class list 2D
        /// \return In the vector True if the class list 2D is superior or equal, False if not
        vector<vector<bool>> isSuperiorOrEqual(vector<vector<float>> list);

        /// Create a boolean vector
        /// \param list vector test with the class list 3D
        /// \return In the vector True if the class list 3D is superior or equal, False if not
        vector<vector<vector<bool>>> isSuperiorOrEqual(vector<vector<vector<float>>> list);

        ////////////////////////////////////////

        /// Create a boolean vector
        /// \param list vector test with the class list 1D
        /// \return In the vector True if the class list 1D is superior, False if not
        vector<bool> isSuperior(vector<float> list);

        /// Create a boolean vector
        /// \param list vector test with the class list 2D
        /// \return In the vector True if the class list 2D is superior, False if not
        vector<vector<bool>> isSuperior(vector<vector<float>> list);

        /// Create a boolean vector
        /// \param list vector test with the class list 3D
        /// \return In the vector True if the class list 3D is superior, False if not
        vector<vector<vector<bool>>> isSuperior(vector<vector<vector<float>>> list);

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
        vector<float> sort1D(void);

        /// Organize the list 2D from smallest to largest 
        /// \return The vector organize
        vector<vector<float>> sort2D(void);

        /// Organize the list 2D from smallest to largest 
        /// \return The vector organize
        vector<vector<vector<float>>> sort3D(void);

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
        
        /// Transform the matrix 1D to identity matrix
        void identity1D(void);

        /// Transform the matrix 2D to identity matrix
        /// \param size of the matrix (min 1)
        void identity2D(unsigned int size = 1);

        /// Transform the matrix 3D to identity matrix
        /// \param size of the matrix (min 1)
        void identity3D(unsigned int size = 1);

        ////////////////////////////////////////

        /// Sum an enter list 1D and the class list 1D, both list need the same size
        /// \param list The list to additional to the class list 1D
        void sum(vector<float> list);

        /// Sum an enter list 2D and the class list 2D, both list need the same size
        /// \param list The list to additional to the class list 2D
        void sum(vector<vector<float>> list);

        /// Sum an enter list 3D and the class list 3D, both list need the same size
        /// \param list The list to additional to the class list 3D
        void sum(vector<vector<vector<float>>> list);

        ////////////////////////////////////////

        /// Substraction an enter list 1D and the class list 1D, both list need the same size
        /// \param list The list to substract to the class list 1D
        void sub(vector<float> list);

        /// Substraction an enter list 2D and the class list 2D, both list need the same size
        /// \param list The list to substract to the class list 2D
        void sub(vector<vector<float>> list);

        /// Substraction an enter list 3D and the class list 3D, both list need the same size
        /// \param list3D The list to substract to the class list 3D
        void sub(vector<vector<vector<float>>> list);

        ////////////////////////////////////////

        /// Multiply an enter list 1D and the class list 1D (the two list need just one value)
        /// \param list The list to multiply to the class list 1D
        /// \return vector 1D with one value
        vector<float> mult(vector<float> list);

        /// Multiply an enter list 2D and the class list 2D
        /// \param list The list to multiply to the class list 2D
        /// \return vector 2D with one value
        vector<vector<float>> mult(vector<vector<float>> list);

        /// Multiply an enter list 3D and the class list 3D
        /// \param list The list to multiply to the class list 3D
        /// \return vector 3D with one value
        vector<vector<vector<float>>> mult(vector<vector<vector<float>>> list);

        ////////////////////////////////////////

        /// Print 1D matrix
        void print1D(void) const;

        /// Print 2D matrix
        void print2D(void) const;

        /// Print 3D matrix
        void print3D(void) const;

        /// Print all matrix
        void print(void) const;
};

#endif