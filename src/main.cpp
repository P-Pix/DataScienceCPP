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

#include "../include/Numcpp.hpp"
#include "../include/Pltcpp.hpp"
#include "../include/ImageInfo.hpp"

#include "../include/Maths.hpp"

#include <typeinfo>

//using namespace std;

int main(void)
{
    Numcpp Numcpp;
    Pltcpp Window("index");
    ImageInfo Image("Image/index.png");
    std::vector<float> vect = {16, 8, 4, 19, 7, 1};
    std::vector<std::vector<float>> vect2D = 
    {
        {7, 5, 9},
        {4, 200, 78},
        {84, 99, 1}
    };

    Numcpp.listZero3D(3, 3, 3);
    //Numcpp.listZero2D(Image.getWidth(), Image.getHeight());
    //Numcpp.sum(Image.getGreen());
    Numcpp.listZero1D(6);
    Numcpp.sum(vect);
    Numcpp.print1D();
    Numcpp.sort1D();
    Numcpp.print1D();

    Numcpp.listZero2D(3 , 3);
    Numcpp.sum(vect2D);
    Numcpp.print2D();
    Numcpp.sort2D();
    Numcpp.print2D();

    cout << "The minimum value of 1D list it's = " << Numcpp.min1D() << endl;

    Numcpp.identity2D(10);

    while(Window.isOpen())
    {
        Window.pollEvent();
        Window.updateScreen();
    }
    std::cout << exp(-3) << std::endl;
    return EXIT_SUCCESS;
}