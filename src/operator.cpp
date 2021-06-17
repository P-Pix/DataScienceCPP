/**
 * @file Operator.cpp
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-06-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../import/Numcpp.h"

std::ostream &operator<<(std::ostream &flux, Numcpp Numcpp)
{
    flux << std::endl << "########## 3D Array ##########" << std::endl << std::endl;
    Numcpp.printArray3D(flux, Numcpp.getArray3D());
    flux << std::endl << "########## 2D Array ##########" << std::endl << std::endl;
    Numcpp.printArray2D(flux, Numcpp.getArray2D());
    flux << std::endl << "########## 1D Array ##########" << std::endl << std::endl;
    Numcpp.printArray1D(flux, Numcpp.getArray1D());
    return flux;
}

std::ostream &operator<<(std::ostream &flux, std::vector<float> list)
{
    flux << "[";
    for(int x = 0; x < list.size(); x ++)
    {
        flux << list[x] << ", ";
    }
    flux << "]" << std::endl;
    return flux;
}
std::ostream &operator<<(std::ostream &flux, std::vector<std::vector<float>> list)
{
    for(int y = 0; y < list.size(); y ++)
    {
        flux << "[";
        for(int x = 0; x < list[y].size(); x ++)
        {
            flux << list[y][x] << ", ";
        }
        flux << "]" << std::endl;
    }
    return flux;
}
std::ostream &operator<<(std::ostream &flux, std::vector<std::vector<std::vector<float>>> list)
{
    for(int z = 0; z < list.size(); z ++)
    {
        flux << std::endl << "########## " << z + 1 << " / " << list.size() << " ##########" << std::endl << std::endl;
        for(int y = 0; y < list[z].size(); y ++)
        {
            flux << "[";
            for(int x = 0; x < list[z][y].size(); x ++)
            {
                flux << list[z][y][x] << ", ";
            }
            flux << "]" << std::endl;
        }
    }
    return flux;
}