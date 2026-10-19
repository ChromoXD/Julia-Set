#include <iostream>
#include <bits/stdc++.h>
#include <raylib.h>
#include "./Headers/Game.hpp"
#include "main.hpp"

#define GLSL_VERSION 430

int main(void)
{
    Game game({1200, 800}, 60);

    InitWindow(game.getDimention().first, game.getDimention().second, "Julia Set");

    Start();
    

    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(RAYWHITE);

            Update();

        EndDrawing();
    }

    CloseWindow();

    return 0;
}

void Start(){
    shader_frag = LoadShader(0, TextFormat("./Shaders/frag.glsl", GLSL_VERSION));
}

void Update(){

}