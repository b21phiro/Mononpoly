#include <SFML/Graphics.hpp>

#define WINDOW_TITLE "Mononpoly"

int main()
{
    // Create the main window
    sf::RenderWindow window(sf::VideoMode({800, 600}), "SFML window");

    // Load a sprite to display
    const sf::Texture texture("../../src/resources/textures/alma-liten-1-1.jpg");
    sf::Sprite sprite(texture);

    // Create a graphical text to display
    const sf::Font font("../../src/resources/fonts/Dosis-Regular.ttf");
    sf::Text text(font, "Hello SFML", 50);

    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        while (const std::optional event = window.pollEvent())
        {
            // Close window: exit
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        // Clear screen
        window.clear();

        // Draw the sprite
        window.draw(sprite);

        // Draw the string
        window.draw(text);

        // Update the window
        window.display();
    }

    return 0;
}
