typedef int MazeElementType;

enum MazeElementType {
    empty; //0
    finish; //1
    wall; //2
};

/**
 * This structure describes a single maze element.
 */
struct MazeElement {
    /**
     * Maze element type.
     *
     * @see enum MazeElementType*
     */
    MazeElementType type = empty;
};

/**
 * This class stores the maze structure.
 */
class Maze {
    /**
     * Pointer to a 2 dimensional array of struct MazeElement
     */
    MazeElement **completeMaze;

public:
    /**
     * Initialize the maze to a certain size.
     *
     * @param sizeX
     * @param sizeY
     */
    Maze(int sizeX, int sizeY);
    /**
     * Sets the element type in a specific position
     *
     * @param x
     * @param y
     * @param element type
     */
    void setElementType(int x, int y, MazeElementType type);

    /**
     * Returns the element type in a specific position.
     */
    MazeElementType getElementType(int x, int y);
};
