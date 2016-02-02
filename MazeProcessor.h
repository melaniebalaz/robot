typedef int RobotOrientation;
typedef int ProcessingResult;

const RobotOrientation ROBOT_ORIENTATION_UP     = 0;
const RobotOrientation ROBOT_ORIENTATION_RIGHT  = 1;
const RobotOrientation ROBOT_ORIENTATION_DOWN   = 2;
const RobotOrientation ROBOT_ORIENTATION_LEFT   = 3;

/**
 * The current step resulted in a valid move.
 */
const ProcessingResult PROCESSING_RESULT_OK     = 0;
/**
 * The current step resulted in an invalid move (bug in the robots algorithm)
 */
const ProcessingResult PROCESSING_RESULT_ERROR  = 1;
/**
 * The current step resulted in the robot moving to the finish coordinate.
 */
const ProcessingResult PROCESSING_RESULT_FINISH = 2;

struct RobotCoordinate {
    int x;
    int y;
};

/**
 * This class processes a maze with a specific robot algorith.
 */
class MazeProcessor {
    RobotCoordinate  currentPosition;
    RobotOrientation currentOrientation;
    Maze  maze;
    Robot robot;
public:
    /**
     * Initialize the maze processor with the details required to process.
     */
    MazeProcessor(Maze maze, Robot robot, RobotCoordinate startingPosition);
    /**
     * Process a single step using the robots algorithm and give back the result.
     */
    ProcessingResult step();
};
