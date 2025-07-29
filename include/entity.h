#pragma once

#include <raylib.h>

class Entity {
    public:
        Entity(int x, int y, int height, int width);

        int GetX();
        int GetY();
        int GetHeight();
        int GetWidth();
        int GetTextureRow();
        int GetTexturColumn();

        void SetX(int x);
        void SetY(int y);
        void SetHeight(int height);
        void SetWidth(int width);
        void SetTextureRow(int texture_row);
        void SetTextureColumn(int texture_column);
        void SetTexture(Texture2D texture);

        void Draw();
    private:
        int x, y;
        int width, height;
        int texture_row, texture_column;
        Texture2D texture;
};