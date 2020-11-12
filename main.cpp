#include <SFML/Graphics.hpp>
#include <iostream>

int main() {

    sf::RenderWindow window(sf::VideoMode(640, 480, 32), "Hello SFML");

    auto desktop = sf::VideoMode::getDesktopMode();
    window.setPosition(
            sf::Vector2i(desktop.width / 2 - window.getSize().x / 2, desktop.height / 2 - window.getSize().y / 2));

    sf::Font font;

    if (!font.loadFromFile("OpenSans-Bold.ttf"))
        std::cout << "Font not loaded" << std::endl;

    sf::Text text("Hello World", font, 11);
    text.setCharacterSize(32);
    text.setPosition(window.getSize().x / 2.0f - text.getGlobalBounds().width / 2.0f,
                     window.getSize().y / 2.0f - text.getGlobalBounds().height / 2.0f);


    while (window.isOpen()) {

        sf::Event event{};
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }

            window.clear(sf::Color::Black);
            window.draw(text);
            window.display();
        }
    }
    return 0;
}
