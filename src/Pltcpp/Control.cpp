/**
 * @file Control.cpp
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Pltcpp.hpp"

void Pltcpp::pollEvent()
{
    if(this -> m_Window -> pollEvent(this -> m_Event))
    {
        if(this -> m_Event.type == sf::Event::Closed)
        {
            this -> m_Window -> close();
        }
        else if(this -> m_Event.type == sf::Event::KeyPressed)
        {
            if(this -> m_Event.key.code == sf::Keyboard::Escape)
            {
                this -> m_Window -> close();
            }
        }
    }
}
void Pltcpp::updateScreen()
{
    allDrawing();
}