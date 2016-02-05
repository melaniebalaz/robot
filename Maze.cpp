#include "Maze.h"


/**
 * Allocates memory for a 2 dimensional array of struct MazeElements
 */

Maze::Maze(int sizeX, int sizeY) {
    completeMaze = new MazeElement*[sizeX];

    for (int i = 0; i < sizeX; ++i) {
        completeMaze[i] = new MazeElement[sizeY];
    }
}

void Maze::setElementType(int x, int y, MazeElementType type){
    completeMaze[x][y].type = type;
    return;
}

MazeElementType Maze::getElementType(int x, int y){
    return completeMaze[x][y].type;
}