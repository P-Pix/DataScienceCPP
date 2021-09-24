/**
 * @file Pltcpp.hpp
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _PLTCPP_HPP_
#define _PLTCPP_HPP_

#include <SFML/Graphics.hpp>
#include <vector>

#include "GradientDescent.hpp"

class Pltcpp : public GradientDescent
{
    private:


        /// Dimension window width
        unsigned int    m_width = 400;

        /// Dimension window height
        unsigned int    m_height = 400;
        
        /// 
        unsigned int    m_startx = 0,
                        m_starty = 0,
                        m_endx = 0,
                        m_endy = 0;



        /// Render Window to draw        
        sf::RenderWindow    *m_Window;

        /// Video Mode for window parameter
        sf::VideoMode   m_Video;

        /// Window event
        sf::Event   m_Event;



        /// abscissa
        sf::RectangleShape  m_liney;

        /// ordered
        sf::RectangleShape  m_linex;



        /// Draw abscissa and ordered
        void makeLine(void);
        


        /// Update screen with points and abscissa and ordered
        void allDrawing(void);

        /// add in the draw list the abscissa an ordered and the 
        void drawGraphicScale(void);



        /// add in the draw list a sprite
        void drawSprite(sf::Sprite sprite);

        /// add in the draw list a text
        void drawText(sf::Text text);

        /// add in the draw list a rectangle
        void drawRectangle(sf::RectangleShape rectangle);

        /// add in the draw list a circle
        void drawPoint(sf::CircleShape point);
        


        /// Transform all Coord2D in circle for drawing
        void drawAllCoord2D(void);

    protected:

    public:


        /// Default constructor 
        /// Default name : Window
        Pltcpp(void);

        /// Contructor with a specific name
        /// \param name_window window name
        Pltcpp(const char *name_window);

        /// Destructor
        ~Pltcpp(void);
        


        /// Test if the window is open
        /// \return True if the window is open False if not
        bool isOpen(void);

        /// \return list Coord2D
        std::vector<GradientDescent::Coord2D> getListCoord2D(void) const;
        


        /// Connect keybord and the cross to function
        void pollEvent(void);

        /// Update screen call function
        void updateScreen(void);

        /// Transform two value x and y to Coord and put it in the Vector Coord2D
        /// \param x abscissa value
        /// \param y ordered value
        void addCoord2D(float x, float y);
};

#endif