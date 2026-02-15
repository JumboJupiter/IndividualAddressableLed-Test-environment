/*
Version -`1.0
Francis O'Donovan
2-08-2026

responcible for defigning sectors for the different light functions.  
Break, reverse, turn, running,
*/
#include <string>
#include "PixelSimulator.h" // for GRID" vars

const int Height = GRID_HEIGHT;
const int Width = GRID_WIDTH;

struct Pixel { // a pixel is simpilly its x and y possision in the grid.
    int x;
    int y;
}

struct Sector {
    const char* name;     
    const Pixel* pixels;  // Pointer to pixel list
    int pixelCount;       // Number of pixels in sector
};

// ----- SECTOR DEFINITIONS -----//

const Pixel LeftTurnPixels[] = {
    {0, 0}, {0, 1}, {0, 2}, {0, 3}, {0, 4}, {0, 5},
    {1, 0}, {1, 1}, {1, 2}, {1, 3}, {1, 4}, {1, 5},
    {2, 0}, {2, 1}, {2, 2}, {2, 3}, {2, 4}, {2, 5},
    {3, 0}, {3, 1}, {3, 2}, {3, 3}, {3, 4}, {3, 5},
};

// Create the sector object
const Sector LeftTurn = {
    "Left Turn",
    LeftTurnPixels,
    sizeof(LeftTurnPixels) / sizeof(Pixel)
};

// -------- END OF DEFINITIONS ------------ //

void ApplySectorColor(const Sector & sector, int r, int g, int b){
    for (int i = 0; i < pixelCount; i++){
        SetPixel(
            sector.pixels[i].x,
            sector.pixels[i].y,
            r, g, b 
        );
    }
}