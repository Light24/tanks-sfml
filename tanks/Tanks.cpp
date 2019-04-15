#include "SFML/Graphics.hpp"
#include <Windows.h>

int WINAPI WinMain(HINSTANCE in_hInstance, HINSTANCE in_hPrevInstance, LPSTR lpCmdLine, int bCmdShow)
{
	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.display();

		Sleep(10);
	}

	return 0;
}