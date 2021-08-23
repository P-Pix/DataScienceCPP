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

#include "include/Numcpp.hpp"
#include "include/Pltcpp.hpp"
#include "include/ImageInfo.hpp"

using namespace std;

int main(void)
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

    Numcpp.print();

    Numcpp.print3D();

    cout << "The minimum value of 1D list it's = " << Numcpp.min1D() << endl;

    Numcpp.identity2D(10);

    while(Window.isOpen())
    {
        Window.pollEvent();
        Window.updateScreen();
    }
    return EXIT_SUCCESS;
}