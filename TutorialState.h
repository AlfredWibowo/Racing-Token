#pragma once
#include "MainMenuState.h"

class TutorialState :public State
{
public:
	void Init(sf::RenderWindow& _window);
	void Input(sf::RenderWindow& _window, sf::Event& _event, std::vector<State*>& _state);
	void Update(sf::RenderWindow& _window, std::vector<State*>& _state);
	void Draw(sf::RenderWindow& _window);

private:
	sf::Text _title;
	sf::Font _font;
	sf::RectangleShape _backButton;
	sf::Texture _backTexture;
	sf::RectangleShape _bg;
	sf::Texture _bg1Texture, _bg2Texture;
};

