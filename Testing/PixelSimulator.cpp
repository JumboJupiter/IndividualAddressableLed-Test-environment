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
//before used simple charters to repersent colors, chat gpt came up with this soultion and code.

const char* ColorToSymbol(const Color& c) {

    // off or black
    if (c.r == 0 && c.g == 0 && c.b == 0)
        return "\033[40m  \033[0m"; // black

    // red
    if (c.r > c.g && c.r > c.b)
        return "\033[41m  \033[0m";

    // green
    if (c.g > c.r && c.g > c.b)
        return "\033[42m  \033[0m";

    // blue
    if (c.b > c.r && c.b > c.g)
        return "\033[44m  \033[0m";

    // yellow (R + G)
    if (c.r == c.g && c.b == 0)
        return "\033[43m  \033[0m";

    // white (R + G + B)
    if (c.r == c.g && c.g == c.b)
        return "\033[47m  \033[0m";

    // catchAll / MIXED
    return "\033[45m  \033[0m"; // magenta (debug color)
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

    return 0;
}