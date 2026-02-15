/*
Version -`1.0
Francis O'Donovan
2-08-2026

responcible for defigning sectors for the different light functions.  
Break, reverse, turn, running,
*/

#include "PixelSimulator.h" // for GRID" vars
#include "SectorCreator.h" //makes deffinitons of sectors and "applySectorColor" public.


//relocated Structs to Header.

// ----- SECTOR DEFINITIONS -----//

const Pixel LeftTurnPixels[] = {
    {0, 0}, {0, 1}, {0, 2}, {0, 3}, {0, 4}, {0, 5}, {0, 6}, {0, 7}, {0, 8},
    {1, 0}, {1, 1}, {1, 2}, {1, 3}, {1, 4}, {1, 5}, {1, 6}, {1, 7}, {1, 8},
    {2, 0}, {2, 1}, {2, 2}, {2, 3}, {2, 4}, {2, 5}, {2, 6}, {2, 7}, {2, 8},
    {3, 0}, {3, 1}, {3, 2}, {3, 3}, {3, 4}, {3, 5}, {3, 6}, {3, 7}, {3, 8},
};

// Create the sector object
const Sector LeftTurn = {
    "Left Turn",
    LeftTurnPixels,
    sizeof(LeftTurnPixels) / sizeof(Pixel)
};

// -------- END OF DEFINITIONS ------------ //

void ApplySectorColor(const Sector & sector, int r, int g, int b){
    for (int i = 0; i < sector.pixelCount; i++){
        SetPixel(sector.pixels[i].y, sector.pixels[i].x, r, g, b);
    }
}