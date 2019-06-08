#include <iostream>
#include <time.h>
#include <SFML/SFML/include/SFML/Graphics.hpp>
using namespace sf;

int main()
{
    RenderWindow window(VideoMode(320,480),"The Game");
    while (window.isOpen())
    {
        Event e;
        while(window.pollEvent(e))
        {
            if(e.type == Event(e)::Closed)
                window.colse();
        }
    window.clear(Color::White);
    window.display();
    }
    return 0;
}
