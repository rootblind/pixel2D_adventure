#include "game.h"


Game::Game(): 
    world(WORLD_WIDTH, WORLD_HEIGHT),
    player(TILE_WIDTH * 3, TILE_WIDTH * 3, PLAYER_TEXTURE_HEIGHT, PLAYER_TEXTURE_WIDTH) // replace these values with a saved state
{
    InitAudioDevice();

    textures.resize(MAX_TEXTURES);
    // the world tile map
    image = LoadImage("assets/tiles.png");
    textures[TEXTURE_TILEMAP] = LoadTextureFromImage(image);
    UnloadImage(image);

    // the character sprites
    image = LoadImage("assets/character.png");
    textures[CHARACTER_TEXTURE] = LoadTextureFromImage(image);
    UnloadImage(image);
    player.SetTexture(textures[CHARACTER_TEXTURE]);

    camera = { 0 };
    camera.target = (Vector2) { (float)player.GetX(), (float)player.GetY() };
    camera.offset = (Vector2) { (float)screenWidth / 2, (float)screenHeight / 2 };
    camera.rotation = 0.0f;
    camera.zoom = 3.0f;
    
}

Game::~Game() {
    
    for(int i = 0; i < MAX_TEXTURES; i++) {
        UnloadTexture(textures[i]);
    }

    CloseAudioDevice();
}

void Game::Update() {
    Zoom(); // handling zooming

    camera.target = (Vector2) { (float)player.GetX(), (float)player.GetY() }; 
}

void Game::Render() {
    BeginMode2D(camera);
    world.Render(textures, player);
    EndMode2D();
}

void Game::Zoom() {
    float wheel = GetMouseWheelMove();
    float max_zoom = 8.0f;
    float min_zoom = 3.0f;
    if(wheel) {
        const float zoomIncrement = 0.250f;
        camera.zoom += (wheel * zoomIncrement);

        // camera zoom level locked between min and max zoom
        if(camera.zoom < min_zoom)
            camera.zoom = min_zoom;
        else if (camera.zoom > max_zoom)
            camera.zoom = max_zoom;
    }
}