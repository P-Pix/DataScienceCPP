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

#include "include/Numcpp.h"
#include "include/Pltcpp.h"
#include "include/ImageInfo.h"

#include "src/operator<<.cpp"

using namespace std;

int main()
{
    Numcpp Numcpp;
    Pltcpp Window("index");
    ImageInfo Image("Image/index.png");
    vector<float> vect;

    Numcpp.listZero3D(3, 3, 3);
    Numcpp.listZero2D(Image.getWidth(), Image.getHeight());
    Numcpp.sum(Image.getGreen());
    Numcpp.listZero1D(2);
    vect.push_back(8);
    vect.push_back(16);
    Numcpp.sum(vect);
    vect[1] = 1;

    cout << Numcpp << endl;

    cout << Numcpp.isEqual(vect) << endl;

    cout << Numcpp.min1D() << endl;

    Numcpp.identity2D(10);

    cout << Numcpp.getlist2D() << endl;

    while(Window.isOpen())
    {
        Window.pollEvent();
        Window.updateScreen();
    }
    return 0;
}