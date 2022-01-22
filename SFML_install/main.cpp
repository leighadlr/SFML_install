//
//  main.cpp
//  SFML_install
// from https://en.sfml-dev.org/forums/index.php?topic=25557.0
// tutorial : https://youtu.be/mtEiyDbYMxQ
//  Created by Leigh Arino on 1/21/22.
//

#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(640,480), "Awesome Game");
    
    while (window.isOpen()) {
        sf::Event event;
        // handle all events
        while (window.pollEvent(event)) {
            switch(event.type) {
                case sf::Event::Closed:
                    window.close();
                    
                    break;
            }
        }
        
        // update the game
        
        window.clear();
        
        // draw objects here
        
        window.display();
    }
    
}
