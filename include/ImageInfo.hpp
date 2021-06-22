/**
 * @file ImageInfo.hpp
 * @author Guillaume LEMONNIER
 * @brief 
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _IMAGEINFO_HPP_
#define _IMAGEINFO_HPP_

#include <SFML/Graphics/Image.hpp>
#include <SFML/Graphics/Color.hpp>

#include <vector>

class ImageInfo
{
    private:
        ////////////////////////////////////////

        /// Image adress
        const char *m_nameimage = "";

        /// Image width
        unsigned int m_width = 0;

        /// Image height
        unsigned int m_height = 0;

        sf::Image m_Image;

        ////////////////////////////////////////

        /// Vector Red color
        std::vector<std::vector<float>> m_Red;

        /// Vector Blue color
        std::vector<std::vector<float>> m_Blue;

        /// Vector Green color
        std::vector<std::vector<float>> m_Green;

        /// Vector Red Green Blue colors
        std::vector<std::vector<std::vector<float>>> m_RGB;

        ////////////////////////////////////////

        /// Calcul image size
        void imageSize(void);

        /// Calcul image red
        void imageRed(void);

        /// Calcul image green
        void imageGreen(void);

        /// Calcul image blue
        void imageBlue(void);

        /// Put Red Blue and Gren vector in the RGB
        void imageRGB(void);        

    protected:

    public:
        ////////////////////////////////////////

        /// Default constructor
        ImageInfo(void);

        /// Constructor with a image adress
        /// \param name image adress
        ImageInfo(const char *name);

        /// Destructor
        ~ImageInfo(void);

        ////////////////////////////////////////

        /// \return Vector Red color
        std::vector<std::vector<float>> getRed(void) const;

        /// \return Vector Blue color
        std::vector<std::vector<float>> getBlue(void) const;

        /// \return Vetor Green color
        std::vector<std::vector<float>> getGreen(void) const;

        /// \return Vector Red Green Blue colors
        std::vector<std::vector<std::vector<float>>> getRGB(void) const;

        ////////////////////////////////////////

        /// \return Image Adress
        const char *getAdress(void) const;

        ////////////////////////////////////////

        /// \return Image width
        unsigned int getWidth(void) const;

        /// \return Image height
        unsigned int getHeight(void) const;

        ////////////////////////////////////////

        /// Give a new image to analyse
        /// \param name image adress
        void newImage(const char *name);
};

#endif