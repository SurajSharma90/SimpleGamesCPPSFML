#include "Game.h"

void Game::initVariables()
{
  this->window = nullptr;
}

void Game::createWindow()
{
  sf::ContextSettings contextSettings;
  sf::VideoMode videoMode;

  this->window = new sf::RenderWindow(
    videoMode.getDesktopMode(), 
    "SimpleGamesCPPSFML", 
    sf::Style::None | sf::Style::Close | sf::Style::Titlebar, 
    contextSettings
  );
}

Game::Game()
{
  this->initVariables();
  this->createWindow();
}

Game::~Game()
{
  delete this->window;
}

void Game::update()
{

}

void Game::render()
{
  this->window->clear();
  //this->window->draw()
  this->window->display();
}

void Game::run()
{
  while (this->window->isOpen())
  {
    
    while (this->window->pollEvent(this->windowEvent))
    {
      if (windowEvent.type == sf::Event::Closed)
        this->window->close();
    }

    this->render();
    this->update();
  }
}
