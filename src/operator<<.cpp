/**
 * @file operator<<.cpp
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-06-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../import/Numcpp.h"
#include "../import/Pltcpp.h"
#include "../import/GradientDescent.h"

/// Print 1D list floatant
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

/// Print 2D list floatant
std::ostream &operator<<(std::ostream &flux, std::vector<std::vector<float>> list)
{
    for(int y = 0; y < list.size(); y ++)
    {
        flux << list[y];
    }
    return flux;
}

/// Print 3D list floatant
std::ostream &operator<<(std::ostream &flux, std::vector<std::vector<std::vector<float>>> list)
{
    for(int z = 0; z < list.size(); z ++)
    {
        flux << std::endl << "########## " << z + 1 << " / " << list.size() << " ##########" << std::endl << std::endl;
        flux << list[z];
    }
    return flux;
}

///////////////////////////////////////

/// Print 1D list boolean
std::ostream &operator<<(std::ostream &flux, std::vector<bool> list)
{
    flux << "[";
    for(int x = 0; x < list.size(); x ++)
    {
        if(list[x])
        {
            flux << "True, ";
        }
        else
        {
            flux << "False, ";
        }
    }
    flux << "]" << std::endl;
    return flux;
}

/// Print 2D list boolean
std::ostream &operator<<(std::ostream &flux, std::vector<std::vector<bool>> list)
{
    for(int y = 0; y < list.size(); y ++)
    {
        flux << list[y];
    }
    return flux;
}

/// Print 3D list boolean
std::ostream &operator<<(std::ostream &flux, std::vector<std::vector<std::vector<bool>>> list)
{
    for(int z = 0; z < list.size(); z ++)
    {
        flux << std::endl << "########## " << z + 1 << " / " << list.size() << " ##########" << std::endl << std::endl;
        flux << list[z];
    }
    return flux;
}

///////////////////////////////////////

/// Print 1D, 2D, 3D list in the Numcpp
std::ostream &operator<<(std::ostream &flux, Numcpp Numcpp)
{
    flux << std::endl << "########## 3D list ##########" << std::endl << std::endl;
    flux << Numcpp.getlist3D();
    flux << std::endl << "########## 2D list ##########" << std::endl << std::endl;
    flux << Numcpp.getlist2D();
    flux << std::endl << "########## 1D list ##########" << std::endl << std::endl;
    flux << Numcpp.getlist1D();
    return flux;
}

/// Print list Coord2D
/*
std::ostream &operator<<(std::ostream &flux, std::vector<GradientDescent::Coord2D> list)
{
    for(int i = 0; i < list.size(); i ++)
    {
        flux << std::endl << "########## " << i + 1 << " / " << list.size() << " ##########" << std::endl << std::endl;
        flux << "x = " << list[i].x << std::endl;
        flux << "y = " << list[i].y << std::endl;
    }
    return flux;
}*/