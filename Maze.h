typedef int MazeElementType;

const MazeElementType MAZE_ELEMENT_TYPE_EMPTY  = 0;
const MazeElementType MAZE_ELEMENT_TYPE_FINISH = 1;
const MazeElementType MAZE_ELEMENT_TYPE_WALL   = 2;

/**
 * This structure describes a single maze element.
 */
struct MazeElement {
    /**
     * Maze element type.
     *
     * @see MAZE_ELEMENT_TYPE_*
     */
    MazeElementType type = MAZE_ELEMENT_TYPE_EMPTY;
    /**
     * Pointer to the element in the "up" direction.
     */
    MazeElement* up;
    /**
     * Pointer to the element in the "down" direction.
     */
    MazeElement* down;
    /**
     * Pointer to the element in the "right" direction.
     */
    MazeElement* right;
    /**
     * Pointer to the element in the "left" direction.
     */
    MazeElement* left;
};

/**
 * This class stores the maze structure.
 */
class Maze {
public:
    /**
     * Initialize the maze to a certain size.
     *
     * @param sizeX
     * @param sizeY
     * @param robot
     */
    Maze(int sizeX, int sizeY);
    /**
     * @param x
     * @param y
     * @param element @see MAZE_ELEMENT_TYPE_*
     */
    setElementType(int x, int y, MazeElementType element);

    /**
     * Returns the element in a specific position.
     */
    MazeElementType getElementType(int x, int y);
};
