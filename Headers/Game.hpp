#include <iostream>
#include <bits/stdc++.h>
#include <raylib.h>


class Game{
    private:
        std::pair<int, int> Dimention;

    public:
        Game::Game(std::pair<int, int> dim, int fps);

        void setDimention(int x,int y){};

        std::pair<int, int> getDimention(){return Dimention;};
};