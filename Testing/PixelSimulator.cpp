/*
Version - 1.0
Francis O'Donovan
1-29-2026

Made for testing Light programs with a grid of leds.  for testing core functions (brake, running, turn,
 reverse) as well as party functions (cool designs, text, ect) 
*/

//class for simple SFML graphics for drawing grid.
#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 300), "Pixel Simulator");

    while (window.isOpen()){
        sf::Event event;
        while (window.pollEvent(event)){
            if (event.type == sf::Event::Closed){
                window.close();
            }

        }
        window.clear();
        window.display();
    }
    return 0;
}