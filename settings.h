#pragma once
#include "SFML/Graphics.hpp"

const float WINDOW_WIDTH = 1600.f;
const float WINDOW_HEIGHT = 900.f;
const std::string WINDOW_TITLE = "SFML Simple Arcanoid";

const float BAT_WIDTH = 150.f;
const float BAT_HEIGHT = 15.f;
const float BAT_OFFSET = 50.f;
const sf::Color BAT_COLOR{ sf::Color::Red };
const sf::Vector2f BAT_START_POS{ (WINDOW_WIDTH - BAT_HEIGHT) / 2,WINDOW_HEIGHT - BAT_OFFSET - BAT_HEIGHT };
const float BAT_SPEED = 5.f;