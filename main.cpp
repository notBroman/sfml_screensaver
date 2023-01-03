#include <SFML/Graphics.hpp>
#include <iostream>

int main(int argc, char * argv[]){

    // create a window
    const int Width = 1280;
    const int Height = 720;
    sf::Vector2f speed(3.f, 3.f);
    sf::Vector2f pos;

    sf::RenderWindow window(sf::VideoMode(Width, Height), "SFML works!");

    // sync window refresh with monitor refresh and limit framerate
    window.setVerticalSyncEnabled(true);
    window.setFramerateLimit(60);

    sf::CircleShape c1(10.f);
    // set the shape color to green
    c1.setFillColor(sf::Color(100, 250, 50));
    c1.setPosition(10.f, 10.f);

    // run the program while the window is open
    while (window.isOpen()){
        // check for all the events since last iteration
        sf::Event event;
        while (window.pollEvent(event)){
            // if closing is requested, the window is closed
            if (event.type == sf::Event::Closed)
                window.close();
        }


        if((pos.x + c1.getRadius()) >= Width || pos.x <= 0){
            speed.x *= -1;
        }

        if((pos.y + c1.getRadius()) >= Height || pos.y <= 0){
            speed.y *= -1;
        }

        c1.move(speed);
        pos = c1.getPosition();

        window.clear();
        window.draw(c1);
        window.display();
    }

    std::cout << "Hello World" << std::endl;

    return 0;
}
