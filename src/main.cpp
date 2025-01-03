#include <SFML/Graphics.hpp>

#define WINDOW_TITLE "Mononpoly"
#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600
#define BOARD_WIDTH 300

sf::Vector2f centerOfScreen()
{
    return {WINDOW_WIDTH / 2.f, WINDOW_HEIGHT / 2.f};
}

sf::CircleShape createBoardShape()
{
    sf::CircleShape board(BOARD_WIDTH, 4);
    const sf::Vector2f center(board.getRadius(), board.getRadius());
    board.setOrigin(center);
    board.setPosition(centerOfScreen());
    return board;
}

int main()
{

    // Zoom level.
    sf::Vector2f zoom(1.f, 1.f);

    // Create the main window.
    sf::RenderWindow window(sf::VideoMode({WINDOW_WIDTH, WINDOW_HEIGHT}), WINDOW_TITLE);

    // Create the main board.
    sf::CircleShape board = createBoardShape();
    board.setScale(sf::Vector2f(1.5f, 1.5f));

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

        // Draw the board
        window.draw(board);

        // Update the window
        window.display();
    }

    return 0;
}
