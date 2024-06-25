#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;

int main() {
    cout << "Hello World!" << endl;

    sf::RenderWindow window(sf::VideoMode(800, 600), "Browser");

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
                cout << "Window Closed" << endl;
            }
        }

        window.clear();

        window.display();
    }

    return 0;
}