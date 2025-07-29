#pragma once

#include "entity.h"
#include "tile.h"
#include "config.h"


#include <vector>
#include <raylib.h>
#include <iostream>

class World {
    public:
        World(int width,int height);
        void Render(std::vector<Texture2D> textures, Entity player);

        void PrintTiles();
    private:
        std::vector<std::vector<Tile>> world_tiles;
        int width;
        int height;

};