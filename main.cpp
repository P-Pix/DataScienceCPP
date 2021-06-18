/**
 * @file main.cpp
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-06-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "import/Numcpp.h"
#include "src/operator<<.cpp"
#include "src/operator==.cpp"

int main()
{
    Numcpp  Numcpp;
    Numcpp.listZero3D(10, 10, 3);
    Numcpp.listZero2D(5, 5);
    Numcpp.listZero1D(2);
    std::vector<float> vect;
    vect.push_back(8);
    vect.push_back(16);
    Numcpp.sum1D(vect);
    
    std::cout << Numcpp << std::endl;
    return 0;
}