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
#include "import/Pltcpp.h"

#include "src/operator<<.cpp"

using namespace std;

int main()
{
    Numcpp Numcpp;
    Pltcpp Window;
    Numcpp.listZero3D(5, 5, 3);
    Numcpp.listZero2D(3, 3);
    Numcpp.listZero1D(2);
    vector<float> vect;
    vect.push_back(8);
    vect.push_back(16);
    Numcpp.sum(vect);
    vect[1] = 1;

    cout << Numcpp << endl;

    cout << Numcpp.isEqual(vect) << endl;

    cout << Numcpp.min1D() << endl;

    while(Window.isOpen())
    {
        Window.pollEvent();
        Window.updateScreen();
    }
    return 0;
}