#include <iostream>
#include <SFML/Graphics.hpp>

int height = 500;
int width = 500;
float radius = 0.0f;
float max_radius = 200.0f;
float thickness = 2.0f;



int main(int argc, char const *argv[])
{
    sf::RenderWindow window(sf::VideoMode(height, width), "Ripple");
    
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }
            
        radius += 1.0f;
        if (radius > max_radius)
        {
            radius = 0.0f;
        }


        
        // if (event.type == sf::Event::MouseButtonReleased) {
        // if (event.mouseButton.button == sf::Mouse::Left) 
        // {
        // }    
            
        // }
            
            
            
            sf::CircleShape ripple (radius);
            ripple.setFillColor(sf::Color::Transparent );     
            ripple.setOutlineThickness(thickness);
            
            int alpha = 255 - (radius/max_radius) * 255;
            ripple.setOutlineColor(sf::Color(255,255,255, alpha));
            
            ripple.setPosition((width/2) - radius, (height/2) - radius);

            

            window.clear(sf::Color::Black);
            window.draw(ripple);
            window.display();
 

        
    }
    
    return 0;
}
