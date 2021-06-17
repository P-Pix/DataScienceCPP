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
    Numcpp  Numcpp,
            Numcpp2;
    Numcpp.listZero3D(10, 10, 3);
    Numcpp.listZero2D(5, 5);
    Numcpp.listZero1D(20);
    Numcpp2.listZero1D(20);
    std::cout << Numcpp << std::endl;
    std::vector<bool>   vectbool,
                        vectboolequal;
    vectbool = Numcpp.isEqual(Numcpp2.getlist1D());
    //vectboolequal = Numcpp.getlist1D() == Numcpp2.getlist1D();
    std::cout << vectbool << std::endl;
    //std::cout << vectboolequal << std::endl;
    return 0;
}