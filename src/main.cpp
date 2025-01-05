#include <iostream>
#include <SFML/Graphics.hpp>

#define WINDOW_TITLE "Mononpoly"
#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600
#define BOARD_WIDTH 300

sf::Vector2f centerOfScreen() {
    return {WINDOW_WIDTH / 2.f, WINDOW_HEIGHT / 2.f};
}

sf::CircleShape createBoardShape() {
    sf::CircleShape board(BOARD_WIDTH, 4);
    const sf::Vector2f center(board.getRadius(), board.getRadius());
    board.setOrigin(center);
    board.setPosition(centerOfScreen());
    return board;
}

int main() {

    // Create the main window.
    sf::RenderWindow window(sf::VideoMode({WINDOW_WIDTH, WINDOW_HEIGHT}), WINDOW_TITLE);

    // The main view of the game.
    sf::View view = window.getDefaultView();

    // Create the main board.
    sf::CircleShape board = createBoardShape();

    // Start the game loop
    while (window.isOpen()) {
        // Process events
        while (const std::optional event = window.pollEvent()) {
            // Close window: exit
            if (event->is<sf::Event::Closed>()) {
                window.close();
            } else if (const auto* mouseWheelScrolled = event->getIf<sf::Event::MouseWheelScrolled>()) {
                if (mouseWheelScrolled->delta == 1) {
                    view.zoom(0.9f);
                } else if (mouseWheelScrolled->delta == -1) {
                    view.zoom(1.1f);
                }
            } else if (const auto* resized = event->getIf<sf::Event::Resized>()) {
                view.setSize({
                    static_cast<float>(resized->size.x),
                    static_cast<float>(resized->size.y),
                });
                window.setView(view);
            }
        }

        // Clear the window.
        window.clear();

        // Our current view.
        window.setView(view);

        // Clear screen
        window.clear();

        // Draw the board
        window.draw(board);

        // Update the window
        window.display();
    }

    return 0;
}
