#include "entity.h"

Entity::Entity(int x, int y, int height, int width) {
    this -> x = x;
    this -> y = y;
    this -> height = height;
    this -> width = width;

    this -> texture_column = 0;
    this -> texture_row = 0;
}

int Entity::GetX() {
    return this -> x;
}

int Entity::GetY() {
    return this -> y;
}

int Entity::GetHeight() {
    return this -> height;
}

int Entity::GetWidth() {
    return this -> width;
}

int Entity::GetTextureRow() {
    return this -> texture_row;
}

int Entity::GetTexturColumn() {
    return this -> texture_column;
}



void Entity::SetX(int x) {
    this -> x = x;
}

void Entity::SetY(int y) {
    this -> y = y;
}

void Entity::SetHeight(int height) {
    this -> height = height;
}

void Entity::SetWidth(int width) {
    this -> width = width;
}

void Entity::SetTextureRow(int texture_row) {
    this -> texture_row = texture_row;
}

void Entity::SetTextureColumn(int texture_column) {
    this -> texture_column = texture_column;
}

void Entity::SetTexture(Texture2D texture) {
    this -> texture = texture;
}



void Entity::Draw() {
    Rectangle source = {
        (float)(texture_row * width), 
        (float)(texture_column * height), 
        (float)width, 
        (float)height
    };
    Rectangle dest = {
        (float)(x), 
        (float)(y), 
        (float)width, 
        (float)height
    };

    Vector2 origin = {0, 0};
    DrawTexturePro(texture, source, dest, origin, 0.0f, WHITE);
}