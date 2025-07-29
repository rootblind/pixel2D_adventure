#include "tile.h"

Tile::Tile(int map_row, int map_column, int texture_row, int texture_column, int height, int width) {
    this -> map_row = map_row;
    this -> map_column = map_column;
    this -> texture_row = texture_row;
    this -> texture_column = texture_column;
    this -> height = height;
    this -> width = width;
}

Tile::Tile(const Tile& obj) {
    map_row = obj.map_row;
    map_column = obj.map_column;
    texture_row = obj.texture_row;
    texture_column = obj.texture_column;
    height = obj.height;
    width = obj.width;
}

Tile& Tile::operator=(const Tile& obj) {
    if(this == &obj)
        return *this;

    map_row = obj.map_row;
    map_column = obj.map_column;
    texture_row = obj.texture_row;
    texture_column = obj.texture_column;
    height = obj.height;
    width = obj.width;

    return *this;
}


int Tile::GetMapColumn() {
    return map_column;
}

int Tile::GetMapRow() {
    return map_row;
}

int Tile::GetTextureRow() {
    return texture_row;
}

int Tile::GetTextureColumn() {
    return texture_column;
}

int Tile::GetHeight() {
    return height;
}

int Tile::GetWidth() {
    return width;
}



void Tile::SetMapRow(int map_row) {
    this -> map_row = map_row;
}

void Tile::SetMapColumn(int map_column) {
    this -> map_column = map_column;
}

void Tile::SetTextureRow(int texture_row) {
    this -> texture_row = texture_row;
}

void Tile::SetTextureColumn(int texture_column) {
    this -> texture_column = texture_column;
}

void Tile::SetHeight(int height) {
    this -> height = height;
}

void Tile::SetWidth(int width) {
    this -> width = width;
}


void Tile::PrintMapCoordonates() {
    std::cout << "[" << map_row << ", " << map_column << "] "; 
}