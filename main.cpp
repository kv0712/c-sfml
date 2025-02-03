#include <SFML/Graphics.hpp>

int main()
{
    //-----------------------initialize-----------------------
    sf::RenderWindow window(sf::VideoMode(800,600), "SFML");

    sf::CircleShape shape(50.0f);
    shape.setFillColor(sf::Color::Red);
    shape.setPosition(sf::Vector2f(100, 100));
    shape.setOutlineThickness(10);
    shape.setOutlineColor(sf::Color::Green);

    sf::RectangleShape rectangle(sf::Vector2f(320.0f, 60.0f));
    rectangle.setFillColor(sf::Color::Blue);
    rectangle.setPosition(sf::Vector2f(300.0f, 300.0f));
    rectangle.setOutlineThickness(10);
    rectangle.setOutlineColor(sf::Color::Green);
    rectangle.setSize(sf::Vector2f(200.0f, 100.0f));
    rectangle.setOrigin(sf::Vector2f(100.0f, 50.0f));
    rectangle.setRotation(45);
    //-----------------------initialize-----------------------


    while(window.isOpen())
    {
        //-----------------------update-----------------------
        sf::Event event;
        while (window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
                window.close();
        }
        //-----------------------update-----------------------



        //-----------------------draw-----------------------
        window.clear(sf::Color::Black);
        window.draw(shape);
        window.draw(rectangle);
        window.display();
        //-----------------------draw-----------------------
    }
    return 0;
}