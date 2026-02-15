/*
Version -`1.0
Francis O'Donovan
2-15-2026

Header to define GRID" dimentions so that they can be accessed across scripts.
*/
#pragma once

struct Color {
    int r;
    int g;
    int b;
};

extern const int GRID_WIDTH;
extern const int GRID_HEIGHT;

void clearGrid();
void printGrid();
void SetPixel(int x, int y, int r, int g, int b);
