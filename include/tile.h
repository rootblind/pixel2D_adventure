#pragma once

#include <iostream>

class Tile {
    public:
        Tile(int map_row, int map_column, int texture_row, int texture_column, int height, int width);
        Tile(const Tile& obj);
        Tile& operator=(const Tile& obj);

        int GetMapRow();
        int GetTextureRow();
        int GetMapColumn();
        int GetTextureColumn();
        int GetHeight();
        int GetWidth();

        void SetMapRow(int map_row);
        void SetTextureRow(int texture_row);
        void SetMapColumn(int map_column);
        void SetTextureColumn(int texture_column);
        void SetHeight(int height);
        void SetWidth(int width);


        void PrintMapCoordonates();
    private:
        // map and texture coordonates represent the tile position in the world map, respectively in the texture image
        int map_row;
        int map_column;
        int texture_row;
        int texture_column;

        int width;
        int height;

};