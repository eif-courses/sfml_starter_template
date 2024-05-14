#include <iostream>
#include <SFML/Window.hpp>
#include "SFML/Graphics.hpp"

int main() {
// create the window
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");


    sf::CircleShape shape(50.f);
    shape.setFillColor(sf::Color(100, 250, 50));



    sf::RectangleShape rectangle(sf::Vector2f(120.f, 50.f));

// change the size to 100x100
    rectangle.setSize(sf::Vector2f(100.f, 100.f));
    rectangle.setPosition(400, 0);


    float temp = 0.f;
    // run the program as long as the window is open
    while (window.isOpen()) {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event)) {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            {
                // left key is pressed: move our character
                shape.move(-10.f, 0.f);
            }

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Right))
            {
                // right key is pressed: move our character
                shape.move(10.f, 0.f);
            }

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
            {
                // right key is pressed: move our character
                shape.move(0.f, 10.f);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
            {
                // right key is pressed: move our character
                shape.move(0.f, -10.f);
            }





        }

        // clear the window with black color
        window.clear(sf::Color::Black);
        window.draw(shape);
        window.draw(rectangle);
        // draw everything here...


        // end the current frame
        window.display();
    }
}