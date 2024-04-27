#pragma once

#include<SFML/Graphics.hpp>

class Game
{
  private:
    sf::RenderWindow *window;
    sf::Event windowEvent;

    void initVariables();
    void createWindow();

  public:
    Game();

    ~Game();

    void update();
    void render();
    void run();
};

