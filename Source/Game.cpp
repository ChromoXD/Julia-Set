#include <iostream>
#include <bits/stdc++.h>
#include <raylib.h>
#include "./Headers/Game.hpp"

Game::Game(std::pair<int, int> dim = {1200, 800}, int fps = {60}){
    Dimention = dim;
    SetTargetFPS(fps);
}

void Game::setDimention(int x,int y){
    Dimention = {x, y};
};

std::pair<int, int> Game::getDimention(){
    return Dimention;
}