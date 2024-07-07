#include "Game.hpp"

void Game::CrChessDesk()
{
	RenderWindow window(sf::VideoMode(640, 480), "Lesson 3. kychka-pc.ru"); //��������� ��� �������� ������ ����
	Texture herotexture;//������� ������ Texture (��������)
	herotexture.loadFromFile("ChessDesk.png");//��������� ��������
	Sprite herosprite;//������� ������ Sprite(������)
	herosprite.setTexture(herotexture);//������� � ���� ������ Texture (��������)
	herosprite.setPosition(100, 25);//������ ��������� ���������� ��������� �������
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear();
		window.draw(herosprite);//������� ������ �� �����
		window.display();
	}
}
