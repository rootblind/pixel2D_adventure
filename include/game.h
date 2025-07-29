#pragma once
#include "config.h"
#include "world.h"
#include "entity.h"

#include <vector>
#include <raylib.h>

class Game {
    public:
        Game();
        ~Game();
        void Update();
        void Render();

        void Zoom();
    private:
        std::vector<Texture2D> textures;
        Image image;
        World world;
        Camera2D camera;
        Entity player;
};