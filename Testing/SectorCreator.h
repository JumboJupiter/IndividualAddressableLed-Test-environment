/*
Version -`1.0
Francis O'Donovan
2-15-2026

Header to define Sectors and "ApplySectorColor".
*/
#pragma once

struct Pixel { // a pixel is simpilly its x and y possision in the grid.
    int x;
    int y;
};

struct Sector {
    const char* name;     
    const Pixel* pixels;  // Pointer to pixel list
    int pixelCount;       // Number of pixels in sector
};

extern const Sector LeftTurn;

void ApplySectorColor(const Sector& sector, int r, int g, int b);