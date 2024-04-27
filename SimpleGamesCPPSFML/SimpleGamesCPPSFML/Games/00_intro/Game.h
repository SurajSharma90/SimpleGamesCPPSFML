#pragma once

#include<SFML/Graphics.hpp>

class Game
{
  private:
    sf::RenderWindow *window;
    sf::Event windowEvent;
    sf::CircleShape circle;

    void initVariables();
    void createWindow();

  public:
    Game();

    ~Game();

    void update();
    void render();
    void run();
};

