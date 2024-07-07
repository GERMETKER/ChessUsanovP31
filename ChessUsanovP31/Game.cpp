#include "Game.hpp"

void Game::CrChessDesk()
{
	RenderWindow window(sf::VideoMode(640, 480), "Lesson 3. kychka-pc.ru"); //увеличили для удобства размер окна
	Texture herotexture;//создаем объект Texture (текстура)
	herotexture.loadFromFile("ChessDesk.png");//загружаем картинку
	Sprite herosprite;//создаем объект Sprite(спрайт)
	herosprite.setTexture(herotexture);//передаём в него объект Texture (текстуры)
	herosprite.setPosition(100, 25);//задаем начальные координаты появления спрайта
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear();
		window.draw(herosprite);//выводим спрайт на экран
		window.display();
	}
}
