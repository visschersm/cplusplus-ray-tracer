#include <SFML/Graphics.hpp>

const int WIDTH = 1920;
const int HEIGHT = 1080;

int main()
{
    sf::RenderWindow window(sf::VideoMode(WIDTH, HEIGHT), "Pixel rendering");

    sf::Uint8* pixels = new sf::Uint8[WIDTH * HEIGHT * 4];

    sf::Texture texture;
    texture.create(WIDTH, HEIGHT);

    sf::Sprite sprite(texture);

    for (register int i = 0; i < WIDTH * HEIGHT * 4; i += 4) 
    {
        pixels[i] = 255; // obviously, assign the values you need here to form your color
        pixels[i + 1] = 0;
        pixels[i + 2] = 0;
        pixels[i + 3] = 255;
    }

    texture.update(pixels);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(sprite);
        window.display();
    }

    return 0;
}