#pragma once

// screen
extern const int screenWidth;
extern const int screenHeight;

// tile related
extern const int TILE_WIDTH;
extern const int TILE_HEIGHT;
extern const int TILE_SPACE;
extern const int TILE_ROWS;
extern const int TILE_COLUMNS;
extern const int MAX_TEXTURES;

// character
extern const int PLAYER_TEXTURE_WIDTH;
extern const int PLAYER_TEXTURE_HEIGHT;

// world related
extern const int WORLD_WIDTH;
extern const int WORLD_HEIGHT;

// enums
enum texture_asset {
    TEXTURE_TILEMAP = 0,
    CHARACTER_TEXTURE = 1,
};