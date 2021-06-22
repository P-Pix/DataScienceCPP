/**
 * @file Constructor.cpp
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Pltcpp.h"

Pltcpp::Pltcpp()
{
    this -> m_Window = nullptr;
    this -> m_Window = new sf::RenderWindow(sf::VideoMode(m_width, m_height), "Window");
    this -> m_Window -> setFramerateLimit(60);
    makeLine();
}

Pltcpp::Pltcpp(const char *namewindow)
{
    this -> m_Window = nullptr;
    this -> m_Window = new sf::RenderWindow(sf::VideoMode(m_width, m_height), namewindow);
    this -> m_Window -> setFramerateLimit(60);
    makeLine();
}
Pltcpp::~Pltcpp()
{

}