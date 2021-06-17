/**
 * @file PublicPrinting.cpp
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-06-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../import/Numcpp.h"

void Numcpp::printlist1D(std::ostream &flux, std::vector<float> list1D)
{
    flux << "[";
    for(int x = 0; x < list1D.size(); x ++)
    {
        flux << list1D[x] << ", ";
    }
    flux << "]" << std::endl;
}
void Numcpp::printlist2D(std::ostream &flux, std::vector<std::vector<float>> list2D)
{
    for(int y = 0; y < list2D.size(); y ++)
    {
        printlist1D(flux, list2D[y]);
    }
}
void Numcpp::printlist3D(std::ostream &flux, std::vector<std::vector<std::vector<float>>> list3D)
{
    for(int z = 0; z < list3D.size(); z ++)
    {
        flux << "########## " << z + 1 << " / " << list3D.size() << " ##########" << std::endl << std::endl;
        printlist2D(flux, list3D[z]);
    }
}