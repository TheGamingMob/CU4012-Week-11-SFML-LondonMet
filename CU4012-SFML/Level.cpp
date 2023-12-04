#include "Level.h"

Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;

	// initialise game objects
	rect.setSize(sf::Vector2f(100, 100));
	rect.setPosition(100, 100);
	rect.setFillColor(sf::Color::Red);

	rect2.setSize(sf::Vector2f(75, 75));
	rect2.setPosition(112, 112);
	rect2.setFillColor(sf::Color::Green);

	rect3.setSize(sf::Vector2f(50, 50));
	rect3.setPosition(124, 124);
	rect3.setFillColor(sf::Color::Blue);

	rect4.setSize(sf::Vector2f(100, 100));
	rect4.setFillColor(sf::Color::Green);

	circle.setRadius(50);
	circle.setPosition(550, 300);
	circle.setFillColor(sf::Color::Blue);
	circle.setOutlineColor(sf::Color::Red);
	circle.setOutlineThickness(3.f);	

	if (!font.loadFromFile("font/arial.ttf"))
	{
		std::cout << "Error loading font\n";
	}

	text.setFont(font);
	text.setPosition(515, 15);
	text.setString("Hello World");
	text.setCharacterSize(25);
	text.setFillColor(sf::Color::Yellow);
	text.setOutlineThickness(3.f);
}

Level::~Level()
{
}

// handle user input
void Level::handleInput()
{

}

// Update game objects
void Level::update()
{
	sf::Vector2u pos = window->getSize();
	rect4.setPosition(pos.x-100, pos.y-100);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(rect);
	window->draw(rect2);
	window->draw(rect3);
	window->draw(rect4);
	window->draw(circle);
	window->draw(text);
	endDraw();
}

void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));

}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}