/**
 * @file Pltcpp.h
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef DEF_PLTCPP
#define DEF_PLTCPP

#include <SFML/Graphics.hpp>
#include <vector>

class Pltcpp
{
    private:
        ////////////////////////////////////////

        /// Dimension window width
        unsigned int    m_width = 400;

        /// Dimension window height
        unsigned int    m_height = 400;
        
        /// 
        unsigned int    m_startx = 0,
                        m_starty = 0,
                        m_endx = 0,
                        m_endy = 0;

        ////////////////////////////////////////

        /// 3D list for Red, Green, Blue
        std::vector<std::vector<std::vector<int>>> m_rgb;

        /// 2D list for Red
        std::vector<std::vector<int>>   m_r;

        /// 2D list for Green
        std::vector<std::vector<int>>   m_g;

        /// 2D list for Blue
        std::vector<std::vector<int>>   m_b;

        ////////////////////////////////////////

        /// Render Window to draw        
        sf::RenderWindow    *m_Window;

        /// Video Mode for window parameter
        sf::VideoMode   m_Video;

        /// Window event
        sf::Event   m_Event;

        ////////////////////////////////////////

        /// abscissa
        sf::RectangleShape  m_liney;

        /// ordered
        sf::RectangleShape  m_linex;

        ////////////////////////////////////////

        /// Draw abscissa and ordered
        void makeLine();
        
        ////////////////////////////////////////

        /// Update screen with points and abscissa and ordered
        void allDrawing();

        /// add in the draw list the abscissa an ordered and the 
        void drawGraphicScale();

        ////////////////////////////////////////

        /// add in the draw list a sprite
        void drawSprite(sf::Sprite sprite);

        /// add in the draw list a text
        void drawText(sf::Text text);

        /// add in the draw list a rectangle
        void drawRectangle(sf::RectangleShape rectangle);

        /// add in the draw list a circle
        void drawPoint(sf::CircleShape point);
        
        ////////////////////////////////////////

        /// Transform all Coord2D in circle for drawing
        void drawAllCoord2D();

    protected:
        ////////////////////////////////////////

        /// Struct to create a point in the graphic
        /// \param x value for abscissa
        /// \param y value for ordered
        struct Coord2D
        {
            float x;
            float y;
        };
    
    private:
        ////////////////////////////////////////

        /// Vector of coord2D 
        std::vector<Coord2D>    m_VectorCoord2D;

    public:
        ////////////////////////////////////////

        /// Default constructor 
        /// Default name : Window
        Pltcpp();

        /// Contructor with a specific name
        /// \param name_window window name
        Pltcpp(const char *name_window);

        /// Destructor
        ~Pltcpp();
        
        ////////////////////////////////////////

        /// Test if the window is open
        /// \return True if the window is open False if not
        bool isOpen();
        
        ////////////////////////////////////////

        /// Connect keybord and the cross to function
        void pollEvent();

        /// Update screen call function
        void updateScreen();

        /// Transform two value x and y to Coord and put it in the Vector Coord2D
        /// \param x abscissa value
        /// \param y ordered value
        void addCoord2D(float x, float y);
};

#endif