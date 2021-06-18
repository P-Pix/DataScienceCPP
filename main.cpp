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

using namespace std;

int main()
{
    Numcpp  Numcpp;
    Numcpp.listZero3D(10, 10, 3);
    Numcpp.listZero2D(5, 5);
    Numcpp.listZero1D(2);
    vector<float> vect;
    vect.push_back(8);
    vect.push_back(16);
    cout << Numcpp.isEqual(vect) << endl;
    
    cout << Numcpp << endl;
    return 0;
}