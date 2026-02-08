/*
Version -`1.0
Francis O'Donovan
2-07-2026

Simple testing before realworld construction

*/
#include <iostream>
#include <cstdlib>  // system("cls")

const int GRID_WIDTH  = 20;
const int GRID_HEIGHT = 10;

bool grid[GRID_HEIGHT][GRID_WIDTH];

void clearGrid() {
    for (int y = 0; y < GRID_HEIGHT; y++) {
        for (int x = 0; x < GRID_WIDTH; x++) {
            grid[y][x] = false;
        }
    }
}

void printGrid() {
    system("cls");  // Clear console (Windows)

    for (int y = 0; y < GRID_HEIGHT; y++) {
        for (int x = 0; x < GRID_WIDTH; x++) {
            std::cout << (grid[y][x] ? "■ " : "· ");
        }
        std::cout << "\n";
    }
}

int main (){
    printGrid();
    clearGrid();
    return 0;
}