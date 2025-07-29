#include "world.h"

World::World(int width, int height) {
    this -> width = width;
    this -> height = height;

    world_tiles.resize(height); // allocate rows

    for(int row = 0; row < height; row++) {
        world_tiles[row].reserve(width); // pre-allocate memory for columns

        for (int column = 0; column < height; column++) {
            // todo: replace 0, 0 with the actual texture coordonates
            world_tiles[row].push_back(Tile(row, column, 0, 0, TILE_HEIGHT, TILE_WIDTH)); 
        }
    }
}

void World::Render(std::vector<Texture2D> textures, Entity player) {
    for(auto row_it = world_tiles.begin(); row_it != world_tiles.end(); ++row_it) {
        for(auto tile = row_it -> begin(); tile != row_it -> end(); ++tile) {

            Rectangle source = {
                (float)(tile -> GetTextureRow() * tile -> GetWidth()), 
                (float)(tile -> GetTextureColumn() * tile -> GetHeight()), 
                (float)tile -> GetWidth(), 
                (float)tile -> GetHeight()
            };
            Rectangle dest = {
                (float)(tile -> GetMapRow() * tile -> GetWidth()), 
                (float)(tile -> GetMapColumn() * tile -> GetHeight()), 
                (float)tile -> GetWidth() + TILE_SPACE, 
                (float)tile -> GetHeight() + TILE_SPACE
            };

            Vector2 origin = {0, 0};
            DrawTexturePro(textures[TEXTURE_TILEMAP], source, dest, origin, 0.0f, WHITE);
        }
    }

    player.Draw();

}

void World::PrintTiles() {
    std::cout << "World Tiles:\n";
    for(auto row_it = world_tiles.begin(); row_it != world_tiles.end(); ++row_it) {
        std::cout << "[ ";

        for(auto tile = row_it -> begin(); tile != row_it -> end(); ++tile) {
            tile -> PrintMapCoordonates();
        }

        std::cout << " ]\n";
    }
}