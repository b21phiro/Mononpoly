#include <SFML/Graphics.hpp>

#define WINDOW_TITLE "Mononpoly"

int main()
{
    auto window = sf::RenderWindow(sf::VideoMode({1920u, 1080u}), WINDOW_TITLE);
    window.setFramerateLimit(144);

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
        }

        window.clear();
        window.display();
    }

    return 0;
}
