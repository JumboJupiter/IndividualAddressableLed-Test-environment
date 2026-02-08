/*
Version -`1.0
Francis O'Donovan
2-07-2026

Simple testing before realworld construction
orginalt used bianart on off leds now uses full r g b controllable
leds just like real world product will.

*/
#include <iostream>
#include <cstdlib>  // system("cls")

struct Color {
    int r;
    int g;
    int b;
};

const int GRID_WIDTH  = 36;
const int GRID_HEIGHT = 12;

//int LoopLegnth; 

Color grid[GRID_HEIGHT][GRID_WIDTH]; //upgraded from bool to show color

void clearGrid() {
    for (int y = 0; y < GRID_HEIGHT; y++) {
        for (int x = 0; x < GRID_WIDTH; x++) {
            grid[y][x] = {0, 0, 0}; //insead of "flase" meaning off grid now clears to "black"
        }
    }
}

void SetAll(int r, int g, int b) {
    for (int y = 0; y < GRID_HEIGHT; y++) {
        for (int x = 0; x < GRID_WIDTH; x++) {
            grid[y][x] = {r, g, b};
        }
    }
}

// allows console to "show" color by using squares
const char* ColorToSymbol(const Color& c) {
    if (c.r == 0 && c.g == 0 && c.b == 0) return "· ";

    if (c.r > c.g && c.r > c.b) return "R ";
    if (c.g > c.r && c.g > c.b) return "G ";
    if (c.b > c.r && c.b > c.g) return "B ";
    if (c.r == c.g && c.b == 0) return "Y ";
    if (c.r == c.b && c.b == c.g) return "W ";

    return "# "; // mixed or white
}

void printGrid() {
    system("cls");  // Clear console (Windows)

    for (int y = 0; y < GRID_HEIGHT; y++) {
        for (int x = 0; x < GRID_WIDTH; x++) {
            std::cout << ColorToSymbol(grid[y][x]);
        }
        std::cout << "\n";
    }
}

int main (){
    clearGrid();
    printGrid();
    
    SetAll(255,255,255);
    printGrid();

    return 0;
}